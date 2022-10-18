#include "main.h"

/**
 * main -a program that prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ch[] = "_putchar";
	int c;

	for (c = 0; c < 9; c++)
	{
		_putchar(ch[c]);
	}
	_putchar('\n');
	return (0);
}
