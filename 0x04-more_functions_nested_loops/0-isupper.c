#include "main.h"

/**
 * _isupper - to check uppercase letters
 * @c: the character to check
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
