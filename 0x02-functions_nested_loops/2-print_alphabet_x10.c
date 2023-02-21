#include "main.h"
/**
 * print_alphabet_x10 - print 10x of the lowercase alphabet,
 *	followed by a new line
 *
 * Return: Always zero
 */
void print_alphabet_x10(void)
{
	int repeat = 0;
	char myalpha;

	while (repeat++ <= 9)
	{
		for (myalpha = 'a'; myalpha <= 'z'; myalpha++)
			_putchar(myalpha);
	_putchar('\n');

	}
}
