#include "main.h"
#include <stdio.h>

/**
 * islower - determines whether a character is lowercase.
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */
	int isLower(char c)
	{
	return (c >= 97 && c <= 122);
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

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: string with capitalized words
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int founDelimit = 1;

	while (*s)
	{
	if (isDelimiter(*s))
	{
	founDelimit = 1;
	}
	else if (isLower(*s) && founDelimit)
	{
	*s -= 32;
	founDelimit = 0;
	}
	else
	{
	founDelimit = 0;
	}
	s++;
	}
	return (ptr);
}
