#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: copy from
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; src[n] != '\0'; ++n)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
