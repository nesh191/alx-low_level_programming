#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * followed by a new line
 * Return: 0 if successful
 *
 */
int main(void)
{
	char i;

	for (i = 'z'; i = 'a'; i--)
	{
		putchar(i);
	}
		putchar('\n');
	return (0);
}
