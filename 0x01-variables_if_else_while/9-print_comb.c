#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9, separated by commas and spaces.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
