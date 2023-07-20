#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    char *c;
    va_list op;
    va_start(op, n);
    for (i = 0 ; i < n; ++i)
    {
        c = va_arg(op, char *);
        if (!c)
            c = "(nil)";
        if(!separator)
            printf("%s", c);
        else if (i == 0)
            printf("%s", c);
        else
            printf("%s%s", separator, c);
    }
    va_end(op);
    printf("\n");
}

