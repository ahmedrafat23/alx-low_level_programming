#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the numbers 0-9 using putchar
 *              while using an int variable.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	/* Convert digit to ASCII representation */
	putchar(digit + '0');
	digit++;
	}

	putchar('\n');

	return (0);
}
