#include "main.h"

/**
* print_alphabet_x10 -> print lowercase of alphabets  X10
*/
void print_alphabet_x10(void)
{
	int k;
	int j;

	for (j = 1;  j <= 10; j++)
	{
	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
		_putchar('\n');
	}
}
