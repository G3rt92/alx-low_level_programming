#include "main.h"

/**
  * create_file - creates a file
  * @filename: a file to be created
  * @text_content: a NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  **/
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t _write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		len = 0;
		for (len = 0; text_content[len];)
			len++;
		_write = write(fd, text_content, len);
	}
	if (fd == -1 || _write == -1)
		return (-1);
	close(fd);
	return (1);
}