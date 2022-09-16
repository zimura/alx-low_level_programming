#include "main.h"

/**
* print_diagonal -  draws a diagonal
* @n: accepts the number of times
* Description: usiing the print_diagonal function
* this program should draw a diagonal
* Return: success
*/
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	_putchar(' ');
	_putchar(92);
	_putchar('\n');
	}
	}
}
