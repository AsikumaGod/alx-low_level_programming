#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9
 *	exluding 2 and 4
 * Return: the numbers from 2 to 4
 */
void print_most_numbers(void)
{
	int y = 0;

	for (; y <= 9; y++)
	{
		if (y == 2 || y == 4)
		{
			continue;
		}
		else
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n')
}
