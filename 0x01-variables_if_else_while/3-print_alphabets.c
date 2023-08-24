#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/* Print lowercase letters */
	while (lowercase <= 'z')
	{
	putchar(lowercase);
	lowercase++;
	}

	/* Print uppercase letters */
	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}

	putchar('\n');

	return (0);
}
