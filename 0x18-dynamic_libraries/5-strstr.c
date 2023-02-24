#include "main.h"
/**
 * *_strstr - find a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p, *q;

	while (*haystack != '\0')
	{
		p = haystack;
		q = needle;

		/*Star WHILE*/
		while (*haystack != '\0' && *q != '\0' && *haystack == *q)
		{
			haystack++;
			q++;
		}
		if (*q == '\0')
			return (p);
		haystack = p + 1;
	}
	return (NULL);
}
