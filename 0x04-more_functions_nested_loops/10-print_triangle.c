#include <stdio.h>
#include "main.h"

/**
* print_triangle -  prints a triangle, followed by a new line
* @size: the character to print
* Description: using the print_triangle
* this program should print a triangle
* Return: success.
*/
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
	for (x = 1; x <= size; x++)
	{
	for ((y = size - x); y > 0; y--)
	{
		_putchar(' ');
	}
	for (y = 0; y < x; y++)
	{
		_putchar('#');
	}
	if (x == size)
	{
		continue;
	}
		_putchar('\n');
	}
	}
	_putchar('\n');
}
