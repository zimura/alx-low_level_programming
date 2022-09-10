#include <stdio.h>

/**
* main - print alphabetin lower and upper case
* Description: using main function
* this program should print "{a...z}{A...z}"
* Return: 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
