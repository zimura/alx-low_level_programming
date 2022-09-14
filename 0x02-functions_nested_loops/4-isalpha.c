#includede "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: the character to print
* Description: using the _isalpha function
* this program should checks for alphabetic character
* Return: 0 or 1 depending on the condition
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
