#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: string to be copied
 *Return: array pointer or NULL
 */
char *_strdup(char *str)
{
	char *str_dup;
	int size, counter;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[i] != '\0')
		size++;

	size++;
	str_dup = (char *) malloc(size * sizeof(*str));

	if (str_dup == NULL)
		return (NULL);

	counter = 0;
	while (str[counter] != '\0')
	{
		str_dup[counter] = str[counter];
		counter++;
	}
	return (str_dup);
}
