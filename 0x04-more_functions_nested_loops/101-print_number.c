#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num;

	/* Handle negative numbers */
	if (n < 0)
	{
	_putchar('-');
	num = -n;
	}
	else
	{
	num = n;
	}

	/* Print the digits recursively */
	if (num / 10 > 0)
	{
	print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}

