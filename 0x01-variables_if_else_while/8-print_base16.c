#include <stdio.h>

/**
* main - printa hexadecimal in lowercase
* Description: Using the main function
* this program should print "{0...f}"
* Return: o (success)
*/

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
