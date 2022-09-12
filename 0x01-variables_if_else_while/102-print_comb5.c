#include <stdio.h>

/**
* main - prints outcomes of two digits combination
* Description: Using the main function
* this program should print "{00 01,...98 99"}
* Return: 0 (success)
*/

int main(void)
{
	int i = 0;
	int j;

	while (i <= 99)
	{
		j = i;
	while (j <= 99)
	{
	if (j != i)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
	if (i != 98 && j != 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	++j;
	}
	++i;
	}
	putchar('\n');
	return (0);
}

