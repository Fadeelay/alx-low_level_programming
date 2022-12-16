#include "main.h"

/**
 * _isupper - test for uper case letters in the character c
 * @c: is the character to be checked
 *
 * Return: return 1 if it is uppercase and 0 if otherwise
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
