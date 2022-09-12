#include <stdio.h>

/**
* main -  prints numbers from zero to nine
* Description: Using the main funtion
* this program should print "{0...9}"
* Return: 0
*
*/

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
