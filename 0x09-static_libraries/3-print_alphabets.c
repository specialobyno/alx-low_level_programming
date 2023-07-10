#include <stdio.h>

/**
 * main - prints the alphabets in lowercase and uppercase,
 * alternating, followed by a new line
 * Return: 0 if success, else 1
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
