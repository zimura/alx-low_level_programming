#include "main.h"
#include <stdio.h>

/**
* print_array - prints n digit of array
* @a: array
* @n: number of values
* Return: a and n iuputs
*/
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != n - 1)
			printf(", ");
	}
	printf("\n");
}
