#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - gives a n a random value each time
 * checks value of n and print zero, positive or negative
 * Return: 0 if successful, else 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
