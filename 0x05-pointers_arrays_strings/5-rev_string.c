#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a, r;
	char c;

	for (a = 0; s[a] != 0; a++)
	{
	}
	r = 0;
	for (a = a - 1; r < a; r++)
	{
		c = s[a];
		s[a] = s[r];
		s[r] = c;
		a--;
	}
}
