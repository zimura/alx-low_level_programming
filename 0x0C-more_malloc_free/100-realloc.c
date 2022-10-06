#include "main.h"

/**
* *_realloc - reallocates a memory block using malloc and free
* @ptr: pointer to previous memory
* @old_size: size in byte of ptr
* @new_size: new size
* Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nclone, *relocate;
	unsigned int i;

	if (ptr != NULL)
	nclone = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relocate = malloc(new_size);
	if (relocate == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relocate + i) == nclone[i];
	}
	free(ptr);
	return (relocate);
}
