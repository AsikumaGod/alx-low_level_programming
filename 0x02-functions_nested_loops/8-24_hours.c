#include "main.h"
/**
 *jack_bauer - print every minute and hour of the day
 *
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hoour++)
	{
		for (minute = 0; hour <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
