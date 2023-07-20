#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  sum of all its parameters
 * @n: count of all the parameters
 * ...: unknown arguments
 *
 * Return: sum of all the parameters or 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
    if(n == 0)
        return (0);
    va_list op;
    va_start(op, n);
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += va_arg(op, int);
    va_end(op);
    return (sum);
}

