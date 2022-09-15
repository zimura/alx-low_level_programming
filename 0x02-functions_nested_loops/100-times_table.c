#include <stdio.h>

/**
* print_times_table -  prints the n times table, starting with 0
* @n: the character that it prints
* Return: n or nothing
*/
void print_times_table(int n)
{
	for (n = 0; n <= 15; n++)
	{
	if (n < 0 ||  n > 15)
	printf("%d, ", n++);
	printf("%d\n", n);
}
