#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - calls a function that prints name
 * @name: pointer to the name
 * @f: pointer to the function to be called 
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
