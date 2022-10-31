#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @c: for c to return
 * @s: string to search character
 * Return: pointer value
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
