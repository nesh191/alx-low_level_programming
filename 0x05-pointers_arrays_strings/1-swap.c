#include "main.h"

/**
 * swap_int - swaps two integers a and b
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
