#include <stdio.h>

/**
* main - prints out the string in the function
* Description: using the printf function
* this should print the sizes of various types in the computer
* Return: 0
*/

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: ld byte(s)\n", sizeof(c));
	printf("Size of a int: %d byte(s)\n", sizeof(i));
	printf("Size of a long: %d byte(s)\n", sizeof(li));
	printf("Size of a long long: %d byte(s)\n", sizeof(lli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
