#include "main.h"

/**
* _puts -  print string followed be a new line
* @str: accepts parameter
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
