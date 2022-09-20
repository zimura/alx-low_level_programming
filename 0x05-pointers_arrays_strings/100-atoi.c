#include "main.h"

/**
* _atoi - coverts strings to integer
* @s: the pointer to the converter
*
* Return: An integer
*/
int _atoi(char *s)
{
	int c = 1;
	unsigned int num = 0;

	do {
	if (*s == '-')
		c *= -1;
	else if (*s >= '0' && *s <= '9')
		num = (num * 10) + (*s - '0');
	else if (num > 0)
		break;
	} while (*s++);
	return (num * c);
}
