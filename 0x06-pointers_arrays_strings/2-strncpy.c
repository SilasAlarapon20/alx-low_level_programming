#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: to be copied 
 * @dest: to be pasted
 * @n: number of bytes
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (a != n)
	{
		dest[a] = src[b];
		b++;
		a++;
		if (src[a] == '\0')
		{
			break;
		}
	}
	while (b != n)
		dest[b++] = '\0';
	return (dest);
}
