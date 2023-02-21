#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98, separated by commas,
 *	with each number on new line
 *@n: where to begin counting from
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
