#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase followed by new line
 *
 * Return: Always zero
 */
void print_alphabet(void)
{
	char myalpha;

	for (myalpha = 'a'; myalpha <= 'z'; myalpha++)
		_putchar(myalpha);

	_putchar('\n');
}
