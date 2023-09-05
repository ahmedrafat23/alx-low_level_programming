#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;

	return (size);
}

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	m = malloc((size1 + size2 + 1) * sizeof(char));

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		m[i] = s1[i];

	for (; i < size1 + size2; i++)
		m[i] = s2[i - size1];

	m[i] = '\0';

	return (m);
}
