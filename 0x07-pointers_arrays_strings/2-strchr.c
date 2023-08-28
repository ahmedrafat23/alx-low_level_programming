#include "main.h"

/**
 * _strchr - finds the first occurrence of a character in a string
 * @s: pointer to the string
 * @c: character to be found
 *
 * Return: pointer to the first occurrence of the character in the string
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0');
}
