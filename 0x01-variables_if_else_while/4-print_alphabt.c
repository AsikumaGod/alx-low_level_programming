#include <stdio.h>
/**
 * main - print alphabet in lowercase except q and e
 *
 * Return: Always zero.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

