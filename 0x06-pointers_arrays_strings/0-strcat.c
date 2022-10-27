#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @src: src string
 * @dest: string that src will be appended to.
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; (dest[a + b] = *src++) != '\0'; b++)
	{
	}
	return (dest);
}
