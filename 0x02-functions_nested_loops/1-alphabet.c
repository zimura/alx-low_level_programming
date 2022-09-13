#include "main.h"

/**
* print_alphabet - prints alphabets in lower case
* Description: using the void function
* this program should "{a...z}"
* Return: 0
*/

void print_alphabet(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
	return (0);
}
