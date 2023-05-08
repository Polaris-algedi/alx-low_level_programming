#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

/**
 * close_file - Closes file descriptor
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int n;

	n = close(fd);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments passed to the program
 * @argv: An array of arguments passed to the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	ssize_t bytes_read, source_fd, dest_fd;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(dest_fd, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(source_fd);
			close_file(dest_fd);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_file(source_fd);
		close_file(dest_fd);
		exit(98);
	}
	close_file(source_fd);
	close_file(dest_fd);
	return (0);
}
