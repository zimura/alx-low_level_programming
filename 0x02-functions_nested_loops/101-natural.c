#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples
* of 3 or 5 below 1024
* Return: Always Sucess
*/

int main(void)
{
	unsigned long int c, e, b;
	int a;

	c = 0;
	e = 0;
	b = 0;

	for (a = 0; a < 1024; ++a)
	{
	if ((a % 3) == 0)
	{
		c = c + a;
	} else if ((a % 5) == 0)
	{
		e = e + a;
	}
	}
	b = c + a;
	printf("%lu\n", b);
	return (0);
}
