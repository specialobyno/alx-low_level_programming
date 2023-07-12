#include "main.h"
#include <stdlib.h>
/**
 * creat_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: - input size
 * @c: - input char
 * Return: NULL if size is 0, or pointer to the array
*/
char *create_array(unsigned int size, char c)
{
		char *arr;
		unsigned int i;

		if (size == 0)
		{
			return (NULL);
		}

		arr = malloc(sizeof(char) * size);

		if (arr == NULL)
		{

			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}

		return (arr);
}
