#include "main.h"

/**
 * _abs - function that computes the absolute
 *		value of the integer
 *
 * @n: takes in ineger type input for function
 *
 * Rteurn: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
