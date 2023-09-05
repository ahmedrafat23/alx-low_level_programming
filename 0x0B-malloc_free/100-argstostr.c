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
 * argstostr - concatenate arguments into a string
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * (nc + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++;
	}

	s[cmpt] = '\0';
	return (s)
}
