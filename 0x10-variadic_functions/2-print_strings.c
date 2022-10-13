#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints strings
* @separator: string to be printed
* @n: number of strings
* Return: no return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	char *str;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(valist, char *);
	if (str)
		printf("%s", str);
	else
		printf("(nil)");
	if (a < n - 1)
	if (separator)
		printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
