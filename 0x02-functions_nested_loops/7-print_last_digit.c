#include "main.h"

/**
 * print_last_digit - function that computes the last value of an integer
 * @c: character for the computation.
 * Return: 0
 */
int print_last_digit(int c)
{
	int i;
	
	i = (c % 10);
	
	if (i < 0)
	{
		i = (-1 * i);
	}
	_putchar(i + '0');
	return (i);
}
