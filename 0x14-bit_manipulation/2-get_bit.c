#include "main.h"

/**
 * get_bit - gets the value of a bit
 * @n: The bit
 * @index: the index
 *
 * Return: success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
