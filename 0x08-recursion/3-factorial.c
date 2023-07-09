#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: the number to calculate the factorial
 * Return: the factorial of the number
 */
int factorial(int n)
{
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n-1);
}
