#include "main.h"

/**
 * main -a program that prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'}
	unsigned int c;

	for (c = 0; c < sizeof (ch); c++)
	{
		_putchar(ch[c]);
	}
	_putchar('\n');
	return (0);
}
