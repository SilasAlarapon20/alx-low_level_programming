#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest:for destination to  copy to
 * @src: source code to copy
 * @n: size of byte to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
