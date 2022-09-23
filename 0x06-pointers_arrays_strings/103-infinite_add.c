#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
* add_strings - add two numbers
* @n1: the string containing the first number to be added
* @n2: the string containing the second number to be added
* @r: the buffer to store the result
* Return: An integer
*/
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int n, t = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		n = (*n1 - '0') + (*n2 - '0');
		n += t;
		*(r + r_index) = (n % 10) + '0';
		t = n / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		n = (*n1 - '0') + t;
		*(r + r_index) = (n % 10) + '0';
		t = n / 10;
	}
	for (; *n2; n2--, r_index)
	{
		n = (*n2 - '0') + t;
		*(r + r_index) = (n % 10) + '0';
		t = n / 10;
	}
	if (t && r_index >= 0)
	{
		*(r + r_index) = (t % 10) + '0';
		return (r + r_index);
	}
	else if (t && r_index < 0)
	return (0);

	return (r + r_index + 1);
}
/**
* infinite_add - add two numbers
* @n1: the string containing the first number to be added
* @n2: the string containing the second number to be added
* @r: the buffer to store the result
* Return: An integer
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int inx, n1_len = 0, n2_len = 0;

	for (inx = 0; *(n1 + inx); inx++)
	n1_len++;

	for (inx = 0; *(n2 + inx); inx++)
	n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
	return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
