#include "main.h"

/**
 * _strcat - concatenate one string to another
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
    int i = strlen(dest);
    int j = 0;
    while(src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
