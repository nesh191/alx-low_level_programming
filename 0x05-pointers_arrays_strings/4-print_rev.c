#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: value to be printed
 * Return: always 0
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
