#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: memory for the array
 * @b: constant byte
 * @n: number of bytes to print
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
