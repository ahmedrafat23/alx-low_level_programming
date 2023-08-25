#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example table:
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/**
			* put space if product is a single digit
			* place the first digit if it's two digits
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0'); /* get the first digit */

			_putchar((prod % 10) + '0'); /* get the second digit */
		}
		_putchar('\n);
	}
}
