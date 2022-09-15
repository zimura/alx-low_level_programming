#include "main.h"

/**
* print_line - that draws a straight line in the terminal
* @n: tells number of times to print line
* Description: using the print_line function
* this program should print lines
* Return: succes
*/
void print_line(int n)
{
	int x;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (x = 0; x < n; x++)
		_putchar(95);
		_putchar('\n');
	}
}
