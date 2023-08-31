#include "main.h"

/**
 * factorial - finds factorial
 * @n: int
 * Return: int
 */

int factorial(unt n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
