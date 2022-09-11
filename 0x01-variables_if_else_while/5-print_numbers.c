#include <stdio.h>

/**
* main - prints numbers for single digits less
* Description: Using the main function
* this program should print "{0...9}"
* Return: (0)
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	printf("\n");
	return (0);
}

