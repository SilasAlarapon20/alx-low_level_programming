#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a number.
 * @n: parameter for the value to be squared root
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (helper (n,i));
}

/**
 * helper - blank
 * @n: number
 * @i: incrementor
 * Return: -1;
 */

int helper(int n, int i)
{
	if (n == (i * i))
		return (1);
	else if (n > (i * i))
		return (helper(n, i + i));
	else
		return (-1);
}
