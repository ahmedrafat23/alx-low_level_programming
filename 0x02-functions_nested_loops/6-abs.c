#include "main.h"

/**
 * _abs - function that computes the absolute
 *        value of the integer
 *
 * @n: takes in integer type input for function
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
