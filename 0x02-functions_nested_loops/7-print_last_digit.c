#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: number to be checked
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');
	return (digit);
}
