#include "main.h"

/**
 * set_bit - set the value of bit
 * @n: a pointer to the bit
 * @index: the index
 *
 * Return: success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
