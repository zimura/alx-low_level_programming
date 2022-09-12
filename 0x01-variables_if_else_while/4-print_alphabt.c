#include <stdio.h>

/**
* main - print alphabets in lowercase except e and q
* Description: using main function
* this program should print "abcdfghijklmnoprstuvwxyx"
* Return: 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
	}
	putchar('\n');
	return (0);
}
