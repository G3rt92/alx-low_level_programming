#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of commandline args
 * @argv: array of strings
 * Return: 0 if success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
