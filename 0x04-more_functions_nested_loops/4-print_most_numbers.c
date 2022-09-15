#include "main.h"

/**
* print_most_numbers - prints the numbers, from
* 0 to 9, followed by a new line
* Description: Using the print_most_numbers function
* this program should print 0 to 9
* Return: success
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9 a++)
	{
	if (a != 2 && a != 4)
		_putchar(a + '0');
	}
	_putchar('\n');
}
