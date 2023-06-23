#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e,
 * followed by a new line
 * Return: 0 if success, else 1
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
