#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string parameter input
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	/* find string length without null char */
	while (s[length] != '\0')
		length++;

	/* swap the string by looping to half the string */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i]; /* -1 because the array starts from 0 */
		s[length - 1 - i] = temp;
	}
}
