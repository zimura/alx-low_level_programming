#include "main.h"

/**
* print_number -  prints an integer
* @n: that prints the character
* Description: using th print_number function
* this program should print an integer
* Return: success
*/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
