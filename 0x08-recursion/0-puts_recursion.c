#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: parameter for s_string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	unsigned int a = 0;

	if (s[a] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[a]);
	_puts_recursion(s + 1);
}
