#include "main.h"

/**
  * append_text_to_file - Appends text at the end of a file
  * @filename: a file to be appended
  * @text_content: a NULL terminated string to be appended at the end
  * Return: 1 on success, -1 on failure
  **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t _write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
