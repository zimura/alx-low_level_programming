#include <stdio.h>

/**
* main -  prints alphabets in lower-case in reverse order
* Description: Using the main function
* this program should print "{z...a}"
* Return: 0
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
