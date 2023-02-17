#include <stdio.h>
/**
 * main -  print numbers from 0 to 10 followed by a new line
 *
 * Return: Always zero
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
