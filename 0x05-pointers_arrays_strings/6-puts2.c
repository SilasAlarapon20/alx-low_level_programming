#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: declaration of str and paramters
 * Return: 0
 */
void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			c = str[i];
			_putchar(c);
		}
	}
	_putchar('\n');
}
