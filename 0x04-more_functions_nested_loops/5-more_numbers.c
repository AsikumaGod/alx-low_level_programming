#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 *
 * Retun: return numbers from 0-14
 */
void more_numbers(void)
{
	int u;
	int q;

	for (u = 0; u < 10; u++)
	{
		for (q = 0; q <= 14; q++)
		{
			if (q > 9)
			{
				_putchar((q / 10) + '0');
			}
			_putchar((q % 10) + '0');
		}
		_putchar('\n');
	}
}

