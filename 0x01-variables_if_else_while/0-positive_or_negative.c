#include <stdlib.h>
#include <time.h>
/**
 * main - prints whether a number is zero, greater or less
 * Return: 0. Otherwise return something else
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	  printf("is positive\n");
	  else if (n < 0)
	    printf("is negative\n");
	    else
	      print("is zero\n");
	return (0);
}
