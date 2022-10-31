#include "main.h"

/**
 * _strspn - returns number of bytes in the initial sengment s
 * @s: for the count action
 * @accept: parameter for char
 * Return: number of bytes;
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	int j = 0;
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				i = 1;
			j += 1;
		}
		j = 0;
		if (i == 0)
			break;
		cont += 1;
		s++;
	}
	return (cont);
}
