#include <stdio.h>

/**
 * main - prints all numbers of base sixteen in lowercase
 * followed by a new line
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
