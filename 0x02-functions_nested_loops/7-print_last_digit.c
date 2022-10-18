#include "main.h"

/**
 * print_last_digit - function that computes the last value of an integer
 * @c: character for the computation.
 * Return: 0
 */
int print_last_digit(int c)
{
	if (c >= 0)
	{
		_putchar (c %10);
		return (c % 10);
	}
	else
	{
		c = c * -1;
		_putchar (c % 10);
		return (c % 10);
	}
}
