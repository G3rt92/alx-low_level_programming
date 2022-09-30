#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line rguments
 * @argv: array of strings
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
