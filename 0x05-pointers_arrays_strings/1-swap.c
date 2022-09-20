#include "main.h"
#include <stdio.h>

/**
* swap_int - checks two integers and swap
* @a: the first integer
* @b: the second integer
*/

void swap_int(int *a, int *b)
{
	int bat;

	bat = *a;
	*a = *b;
	*b = bat;
}
