#include <stdio.h>
/**
 * main - print alphabet in lowercase followed by new line
 *
 * Return: Always zero
 */
int main(void)
{
	char myalpha;

	for (myalpha = 'a'; myalpha <= 'z'; myalpha++)
		_putchar(myalpha);

	_putchar('\n');

	return (0);
}
