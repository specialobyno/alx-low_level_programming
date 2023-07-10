#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Return: length of s if success
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
