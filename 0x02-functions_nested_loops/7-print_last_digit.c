#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the charcter that it prints
* Description: using the print_last_digit function
* this program should prints the last digit of a number
* Return: Always 0
*/
int print_last_digit(int n)
{
	int c;

	if (n < 0)
		n = -n;
	c = n % 10;
	_putchar(c + '0');
	return (c);
}
