#include "main.h"
/**
 * _islower - check if character is lowercase
 *
 *@c: character to be checked
 *
 * Return: 1 if lowercase character, 0 for other
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
