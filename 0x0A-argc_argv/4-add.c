#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * screener - checks if a given char is number or not
 * @s: char to be screened
 * Return: 1, if its a number, else 0
 */
int screener(char *s)
{
	int i, number, length;

	i = 0;
	number = 0;
	length = strlen(s);
	while (i < length)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (-1);
		}
		else
			number = number * 10 + (s[i] - '0');
		i++;
	}
	return (number);
}
/**
 * main - add positive numbers
 * @argc: number of commandline args
 * @argv: array of pointers to arguement strings
 * Return: sum or 1
 */
int main(int argc, char *argv[])
{
	int j, num, sum;

	sum = 0;
	for (j = 1; j < argc; j++)
	{
		num = screener(argv[j]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
