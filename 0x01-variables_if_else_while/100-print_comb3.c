#include <stdio.h>

/**
* main - prints all possible combinations of two digits
* Description: Using main function
* this program print "{0...9}"
* Return: 0 (success)
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
		putchar(i + '0');
		putchar(j + '0');
	if (i == 8 && j == 9)
	{
		continue;
	}
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
