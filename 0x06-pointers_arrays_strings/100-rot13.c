#include "main.h"

/**
* rot13 -  encodes a string using rot13
* @c: the string to encode
* Return: A pointer to the encoded string
*/
char *rot13(char *c)
{
	int index1 = 0, index2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
		'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z'};
	char rot13[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
	      'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E',
	      'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o',
	      'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
	      'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
	      'j', 'k', 'l', 'm'};

	while (c[index1])
	{
	for (index2 = 0; index2 < 52; index2++)
	{
	if (c[index1] == alphabet[index2])
	{
		c[index1] = rot13[index2];
		break;
	}
	}
	index1++;
	}
	return (c);
}
