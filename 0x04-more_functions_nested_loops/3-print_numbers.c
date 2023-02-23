#include "main.h"
/**
 * print_numbers - print numbers from zero to 9
 *	followed by a new line
 *
 * Return: return numbers from 0 to 9
 */
void print_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		_putchar(y + '0');
	}
	_putchar('\n');
}
