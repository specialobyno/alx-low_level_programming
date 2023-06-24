#include <stdio.h>

/**
 * main - prints the number from 1 - 100
 * for mult of 3 & 5 print FizzBuzz
 * Return: 0 if successful, else 1
 */

int main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", i);
		}
	}

	printf("Buzz");
	printf("\n");

	return (0);
}
