#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - this prints a name
* @name: the name to be printed
* @f: this is the pointer to the prinnting function
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
