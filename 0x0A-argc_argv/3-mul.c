#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: argc param
* @argv: an array
* Return: 0
*/
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);
	return (0);
}
