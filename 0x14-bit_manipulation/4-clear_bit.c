#include "main.h"

/**
 * clear_bit - sets value of a bit
 * @n: A pointer to the bit
 * @index: an index
 *
 * Return: success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
