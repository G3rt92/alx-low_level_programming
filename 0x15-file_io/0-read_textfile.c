#include "main.h"

/**
* read_textfile -  reads a text file and prints
* it to the POSIX standard output.
* @filename: file
* @letters: letters to be consumed
* Return: the actual number of letters it could read and print
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, _write, _read;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	_read = read(fd, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	if (_write == -1 || _read != _write)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (_write);
}
