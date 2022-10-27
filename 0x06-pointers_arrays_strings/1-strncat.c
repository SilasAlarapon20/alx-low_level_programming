#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer to return
 * @src: string to be copied
 * @n: parameter for n
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while(dest[a] != '\0')
		a++;
	while(src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}