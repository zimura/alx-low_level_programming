#include <stdlib.h>

#include <time.h>

#include <stdio.h>


void positive_or_negative(int i)
{

	int n;



		srand(time(0));

			n = rand() - RAND_MAX / 2;

			if (n > 0)
			{
				printf("%i is positive\n", n);
			}
			else if (n == 0)
			{
				printf("%i is zero\n", n);
			}
			else if (n < 0)
			{
				printf("%i is zero\n", n);
			}
			return (0);
}

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
