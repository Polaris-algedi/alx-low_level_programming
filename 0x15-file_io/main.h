#ifndef _File_I_O_
#define _File_I_O_

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _File_I_O_ */
