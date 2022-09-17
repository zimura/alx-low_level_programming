#include <stdio.h>

/**
* main - print numbers 1 to 100
* Description: using the main function
* this promgram should print 0 to 100
* Return: 0
*/

int main(void)
{
	int x = 1;

	while (x++ <= 100)
	{
	if ((x % 3 == 0) && (x % 5 == 0))
	{
		printf("FizzBuzz ");
	} else if ((x % 3) == 0)
	{
		printf("Fizz ");
	} else if ((x % 5) == 0)
	{
 	if (x != 100)
	{
		printf("Buzz ")
	} else
	{
		printf("Buzz");
	}
	}
	}
}
