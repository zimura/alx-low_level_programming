#include <stdio.h>

/**
* prime_factor - print the largest factor of a given number
* Description: using the prime_factor function
* this program should print some factor
* Return: success
*/

int main(void)
{
	long num = 612852475143;
	int x;

	while (x++ < num / 2)
	{
	if (num % x == 0)
	{
		num /= 2;
		continue;
	}
	for (x = 3; x < num / 2; x += 2)
	{
	if (num % x == 0)
		num /= x;
	}
	}
	printf("%ld\n", num);
	return (0);
}
