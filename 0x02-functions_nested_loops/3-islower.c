#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 *
 *Return: 1 if c is a lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
