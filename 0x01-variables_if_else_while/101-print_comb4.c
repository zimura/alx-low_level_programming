#include <stdio.h>

/**
* main - prints all combinations of three digits
* Description: Using the main function
* this program should print three digit combination"{0...9}"
* Return: 0 (success)
*/

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
	if (i == 7 && j == 8 && k == 9)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
