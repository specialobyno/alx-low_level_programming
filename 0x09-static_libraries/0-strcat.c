#include "main.h"

/**
 * _strcat - concatenates one string to another
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to the  new dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
