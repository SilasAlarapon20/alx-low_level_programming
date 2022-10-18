#include <main.h>

/**
 * main -a program that prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r',};
	unsigned int p;

	for (p = 0; p < sizeof(ch); p++)
	{
		_putchar(ch[p]);
	}
	_putchar('\n');
	return (0)
