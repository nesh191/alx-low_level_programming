#include <stdio.h>

/**
 * main - prints all single digits of base 10 starting from 0
 * followed by a new line
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
