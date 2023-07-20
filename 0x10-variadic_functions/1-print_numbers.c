#include <stdio.h>
#include <stdarg.h>

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
    va_list nums;
    va_start(nums, n);
    int i, sum = 0;
    for (i = 0; i <= n; i++)
        sum += va_arg(nums, int);
    va_end(nums);
    return (sum);
}
