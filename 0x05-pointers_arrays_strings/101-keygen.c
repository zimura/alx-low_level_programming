#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -  generates a random password
*
* Return: an intger on success
*/

int main(void)
{
	int pswd[100];
	int i, count, s;

	count = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pswd[i] = rand() % 78;
		count += (pswd[i] + '0');
		putchar(pswd[i] + '0');
	if ((2772 - count) - '0' < 78)
	{
		s = 2772 - count - '0';
		count += s;
		putchar(s + '0');
		break;
	}
	}
	return (0);
}
