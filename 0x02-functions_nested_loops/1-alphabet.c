#include "main.h"


/**
 * print_alphabet: print alphabet in lower
 *
 * Return: void (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
