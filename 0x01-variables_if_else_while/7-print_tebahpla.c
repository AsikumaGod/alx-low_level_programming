#include <stdio.h>
/**
 * main - print lowercase in reverse order
 *	each followed by a line
 * Return: Always zero
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
