#include <stdio.h>

/**
* main - prints alphabets in lower cases
* Description: using the main function
* this programm should print "{a...z}"
* Return: 0
*/

int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
