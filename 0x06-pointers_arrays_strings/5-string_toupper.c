#include "main.h"

/**
* string_toupper - to change string case
* @a: parameter a
* Return: string
*/
char *string_toupper(char *a)
{
	int b = 0;

	while (a[b])
	{
	if (a[b] >= 97 && a[b] <= 122)
	a[b] = a[b] - 32;
	b++;
	}
	return (a);
}
