#include <stdio.h>

/**
* main - print numbers 1 to 100
* Description: using the main function
* this promgram should print 0 to 100
* Return: 0
*/

int main(void)
{
	int x;

	while (x <= 100)
	{
	if ((x % 3 == 0) && (x % 5 == 0))
	{
		printf("FIZZBUZZ ");
	} else if (x % 3 == 0)
	{
		printf("FIZZ ");
	} else if (x % 5 == 0)
	{
		printf("BUZZ ");
	if (x != 100)
	{
		printf("BUZZ ")
	} else
	{
		printf("%d ", x);
	}
	}
	}
}
