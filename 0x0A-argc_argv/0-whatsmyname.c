#include <stdio.h>

/**
* main - prints its name, followed by a new line.
* @argc: lines count
* @argv: an array
* Return: 0
*/
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
