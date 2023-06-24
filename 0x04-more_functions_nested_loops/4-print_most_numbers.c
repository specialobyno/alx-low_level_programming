#include <main.h>

/**
 * print_most_numbers - print most numbers except 2 and 4
 * Return: 0 if successful, else 1
 */

void print_most_numbers(void)
{
  int n;
  for(n = 0; n < 10; n++)
    {
      if(n == 4 || n == 2)
	{
	  continue;
	}
      _putchar("%d", n);
    }
  _putchar("\n");
}
