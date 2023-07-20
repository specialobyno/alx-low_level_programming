#include "variadic_functions.h"

/**
 * print_numbers - print numbers in parameter
 * separated by a given separator
 * @separator: the separator to put inbetween numbers
 * @n: the count of integers passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list op;
    va_start(op, n);
    unsigned int i;
    if (separator == NULL)
        {
            for (i = 0; i < n; ++i)
                printf("%d", va_arg(op, int));
        }
        else 
        {
            for (i = 0; i < n; ++i)
                {
                    printf("%d", va_arg(op, int));
                    if(i != n - 1)
                        printf("%s ", separator);
                }
        }
    printf("\n");
    va_end(op);
}

