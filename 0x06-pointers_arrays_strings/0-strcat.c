#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @src: src string
 * @dest: string that src will be appended to.
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	
	int a = 0, b = 0;

	while (*dest[a] != '\0')
		a++;
	while (*src[b] != '\0')
	{
		*dest[a] = *src[b];
		a++;
		b++;
	}
	return (dest)
}
