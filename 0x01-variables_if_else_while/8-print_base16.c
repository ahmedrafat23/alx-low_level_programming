#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = 48; /* 48: decimal representation of '0' */

	while (digit <= 102) /* 102: decimal representation of 'f' */
	{
		putchar(digit);
		/* After '9', we jump till 96 */
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
