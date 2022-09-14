#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: the character to print
* Description: using print_sign function
* this program should print the sign of a number
* Return: 1, 0 or -1 depending on the condition
*/
int print_sign(int n)
{
	if  (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

