#include "main.h"

/**
* print_square - prints square
* @size: accepts parameter
* Description: using the print_square function
* this program should print asquare
* Return: Always success
*/
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
		_putchar(35);
	}
		_putchar('\n');
	}
	}
}
