#include "main.h"

/**
 * _strlen - counts the number of characters in a string
 *@s: return value
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
