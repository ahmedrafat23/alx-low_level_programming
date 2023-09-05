#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	/* +1 on the size puts the end of string character */
	m = malloc((size + 1) * sizeof(*str));

	if (m == NULL)
		return (NULL);
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}

	m[i] = '\0'; /* Add the null-terminating character */
	return (m);
}
