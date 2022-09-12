#include <stdio.h>

/**
* maint - prints all possible combinations 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
* Description: Using the main function
* this program should  be possible to print "{0...9}" in all possible ways
* Return: 0 (success)
*/

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	if (c != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
