#include "main.h"
#include <stdio.h>
/**
* reverse_array - reverses the content of an array of integers
* @a: array a
* @n: an element of an array
*/
void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;
	/**
	 * set value in array in a temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	 */
	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
