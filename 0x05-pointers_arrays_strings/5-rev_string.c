#include "main.h"
/**
 *rev_string - outputs a reversed string
 *@s: points to string char
 * Return: nothing if succesful
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	int j;
	int len;
	char t[900];

	for (i = 0; s[i]; i++)
	{
		t[i] = s[i];
		length++;
	}
	j = 0;
	len = length;
	while (j < length)
	{
		s[j] = t[len - 1];
		j++;
		len--;
	}
}
