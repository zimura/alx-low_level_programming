#include <stdio.h>

/**
* _putchar - writes the characterer to a stdout
* @c: the character to print
* Return: 0 on sucesss 1
* on error -1 returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

