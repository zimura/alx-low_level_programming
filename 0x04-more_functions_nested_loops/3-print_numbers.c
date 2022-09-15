#include "main.h"

/**
* print_numbers -  prints the numbers
* from 0 to 9, followed by a new line
* Description: Using the print_numbers function
* this program should print 0 to 9
* Return: success
*/
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	_putchar(a + '0');
	_putchar('\n');
}
