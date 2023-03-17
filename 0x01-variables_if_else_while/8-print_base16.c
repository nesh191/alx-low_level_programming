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

	for (i = 48; i < 58; i++)
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
