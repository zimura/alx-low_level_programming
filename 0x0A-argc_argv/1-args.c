#include <stdio.h>

/**
* main -  prints the number of arguments passed into it.
* @argc: argc param
* @argv: an arrary
* Return: 0
*/
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}