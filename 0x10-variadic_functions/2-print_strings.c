#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;

	va_list op;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(op, char *);
		if (!c)
			c = "(nil)";
		if (!separator)
			printf("%s", c);
		else if (i == 0)
			printf("%s", c);
		else
			printf("%s%s", separator, c);
	}

	printf("\n");

	va_end(op);
}
