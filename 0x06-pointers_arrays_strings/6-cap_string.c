#include "main.h"
#include <stdio.h>

/**
 * islower - determines whether a character is lowercase.
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */
int islower(char c)
{
	return (c >= 'a' && c <= 122);
}

/**
 * isDelimiter - determines whether a character is a delimiter.
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */
int isDelimiter(char c)
{
	char delimiter[] = " \t\n,.!?\"(){}";
	int i;

	for (i = 0; i < 12; i++)
	{
	if (c == delimiter[i])
	{
	return (1);
	}
	}
	return (0);
}
