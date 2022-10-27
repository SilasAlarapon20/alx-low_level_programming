#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: parameter for append
 * @src: parameter for src
 * @n: max_value of byte
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
