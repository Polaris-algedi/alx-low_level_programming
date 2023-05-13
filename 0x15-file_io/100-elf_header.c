#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
void is_elf(unsigned char *e_ident, int fd);
void print_Magic(unsigned char *e_ident);
void print_Class(unsigned char *e_ident);
void print_Data(unsigned char *e_ident);
void print_Version(unsigned char *e_ident);
void print_Osabi(unsigned char *e_ident);
void print_abi_Version(unsigned char *e_ident);
void print_file_Type(unsigned int e_type);
void print_Epi(unsigned long int e_entry);

/**
 * print_error - Prints an error message to the standard error output and
 *               closes a file descriptor (if provided) before exiting with
 *               a code of 98.
 *
 * @message: A string containing the error message to be printed.
 * @fd:      An integer representing a file descriptor to be closed.
 *
 * Return:   This function does not return a value.
 */
void print_error(const char *message, int fd)
{
	fprintf(stderr, "Error: %s\n", message);
	if (fd > 0)
		close(fd);
	exit(98);
}

/**
 * print_elf_header - Prints the ELF header of an ELF file.
 *
 * @filename: A string containing the name of the file to read
 *            the ELF header from.
 *
 * Return: This function does not return a value.
 */
void print_elf_header(const char *filename)
{
	int fd;
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("open", fd);

	bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
		print_error("read", fd);

	if (bytes_read != sizeof(Elf64_Ehdr))
		print_error("Invalid ELF header", fd);

	/*Check ELF magic */
	is_elf(elf_header.e_ident, fd);

	printf("ELF Header:\n");
	print_Magic(elf_header.e_ident);
	print_Class(elf_header.e_ident);
	print_Data(elf_header.e_ident);
	print_Version(elf_header.e_ident);
	print_Osabi(elf_header.e_ident);
	print_abi_Version(elf_header.e_ident);
	print_file_Type(elf_header.e_type);
	print_Epi(elf_header.e_entry);

	close(fd);
}

/**
 * main - Entry point for the program.
 *
 * @argc: An integer representing the number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or 1 if an incorrect number of command-line arguments
 *         were passed.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s<elf_filename>\n", argv[0]);
		exit(98);
	}

	print_elf_header(argv[1]);

	return (0);
}

/**
 * print_Magic - Prints the magic number of the ELF header.
 *
 * @e_ident: An array of bytes containing the ELF identification information.
 */
void print_Magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		i == EI_NIDENT - 1 ? printf("\n") : printf(" ");
	}
}

/**
 * print_Class - Prints the ELF class of the ELF header.
 *
 * @e_ident: An array of bytes containing the ELF identification information.
 */
void print_Class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_Data - Prints the data encoding of the ELF header.
 *
 * @e_ident: An array of bytes containing the ELF identification information.
 */
void print_Data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_Version - Prints the version of the ELF header.
 *
 * @e_ident: An array of bytes containing the ELF identification information.
 */
void print_Version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);
	e_ident[EI_VERSION] == EV_CURRENT ? printf(" (current)\n") : printf("\n");
}

/**
 * print_Osabi - Prints the OS/ABI of the ELF header.
 *
 * @e_ident: An array of bytes containing the ELF identification information.
 */
void print_Osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi_Version - Prints the ABI version of the ELF header.
 *
 * @e_ident: An array of bytes containing the ELF identification information.
 */
void print_abi_Version(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	e_ident[EI_ABIVERSION]);
}

/**
 * print_file_Type - Prints the type of the ELF header.
 *
 * @e_type: An unsigned integer representing the type of the ELF header.
 */
void print_file_Type(unsigned int e_type)
{
	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_Epi - Prints the entry point address of the ELF header.
 *
 * @e_entry: The entry point address of the ELF header.
 */
void print_Epi(unsigned long int e_entry)
{
	printf("  Entry point address:               0x%lx\n",
	e_entry);
}

/**
 * is_elf - Checks if the given file is an ELF file.
 *
 * @e_ident: An array of bytes containing the ELF identification information.
 * @fd: The file descriptor of the file being checked.
 */
void is_elf(unsigned char *e_ident, int fd)
{
	if (e_ident[EI_MAG0] != ELFMAG0 ||
	    e_ident[EI_MAG1] != ELFMAG1 ||
	    e_ident[EI_MAG2] != ELFMAG2 ||
	    e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF\n", fd);
	}
}
