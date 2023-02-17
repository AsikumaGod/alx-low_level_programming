#include <sdio.h>
/**
 * main - print numbers from 0 to 10
 *	followed by a new line
 *
 * Return: Always zero
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
