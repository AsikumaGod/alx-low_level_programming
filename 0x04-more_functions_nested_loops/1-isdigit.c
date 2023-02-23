#include "main.h"
/**
 * _isdigit - check if entered character is a digit from 0-9
 *
 *@c: the character to be checked
 *Return: 1 for digit, 0 for otherwise
 */
int _isdigit(int c)
{
	for (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
