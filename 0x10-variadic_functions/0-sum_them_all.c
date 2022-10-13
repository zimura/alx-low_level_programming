#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sums all given parameters
* @n: number of arguments
* Return: success
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	int sumed = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (a = 0; a < n; a++)
		sumed += va_arg(valist, int);

	va_end(valist);
	return (sumed);
}
