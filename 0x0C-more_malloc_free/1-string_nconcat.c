#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1 - the first string
 * @s2 - the second string
 * @n - integer to compare with second string
 * Return: pointer to the concatenated string;
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    int i = 0;
    int j = 0;
    ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
    if (!ptr )
    return NULL;
    if(!s1)
    s1 = "";
    if(!s2)
    s2 = "";
   while(s1[i] != "\0")
    {
    ptr[i] = s1[i];
    i++;
    }
    while(s2[j] != "\0")
    {
    ptr[i] = s2[j];
    j++;
    i++;
    }
    ptr[i] = "\0";
    return (ptr);
}
