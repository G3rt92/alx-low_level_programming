#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: number of commandline arguments
 * @argv: array of strings
 * Return: 0 if success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
