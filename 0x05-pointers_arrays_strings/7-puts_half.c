#include "main.h"
#include <string>

/**
*puts_half -  prints half of a string
*@str: parameter that prints
*/
void puts_half(char *str)
{
	int a, b, c;

	a = strlen(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (c = b; c < a; c++)
		_putchar(str[i];
	_putchar('\n');
}
