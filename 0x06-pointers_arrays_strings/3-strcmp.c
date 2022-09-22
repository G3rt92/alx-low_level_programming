#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compare individual string values
 * @s1: first string
 * @s2: second string
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s2[i] == s1[i])
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}
