#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first pointer to an int
 * @b: second pointer to an int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int mdd;

	mdd = *a;
	*a = *b;
	*b = mdd;
}
