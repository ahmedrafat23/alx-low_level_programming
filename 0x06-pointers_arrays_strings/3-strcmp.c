#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if the strings are equal, a positive value if s1 is greater than s2,
 *         or a negative value if s2 is greater than s1
 */
int _strcmp(char *s1, char *s2)
{
	int difference = 0;

	while (*s1)
	{
	if (*s1 != *s2)	
	{
		difference = ((int) *s1) - ((int) *s2);
		break;
	}
	s1++;
	s2++;
	}
	return difference;
}
