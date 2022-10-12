#include "3-calc.h"

/**
* main - perform an operation
* @argc: number of argument
* @argv: array of argument
* Return: Always success
*/
int main(int argc, char *argv[])
{
	int argu1, argu2, result;
	char o;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	argu1 = atoi(argv[1]);
	argu2 = atoi(argv[3])

		func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	o = *argv[2];

	if ((o == '/' || o == '%') && argu2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(argu1, argu2);
	printf("%d\n", result);

	return (0);
}
