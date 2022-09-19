#include <unistd.h>
/**
 * _putchar - write a character c to stdout
 * @c: input char
 * Return: success  1.
 * error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
