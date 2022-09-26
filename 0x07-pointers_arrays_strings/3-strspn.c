#include "main.h"
/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to iterate over
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (f);
	return (0);
}
