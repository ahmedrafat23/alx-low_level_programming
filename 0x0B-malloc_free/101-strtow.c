#include "main.h"

/**
 * wrdcnt - counts the number of words in a string
 * @s: string of count
 *
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * allocate_words - allocates memory for words in the string
 * @str: string to split
 * @w: pointer to the array of strings
 * @n: number of words
 *
 * Return: 1 on success, 0 on failure
 */
int allocate_words(char *str, char **w, int n)
{
	int i, j, k, l, wc = 0;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;

			w[wc] = (char *)malloc(j * sizeof(char));
			j--;

			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w);
				return (0);
			}

			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];

			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}

	return (1);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int n = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = wrdcnt(str);
	if (n == 1)
		return (NULL);

	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);

	w[n - 1] = NULL;

	if (!allocate_words(str, w, n))
	{
		free(w);
		return (NULL);
	}

	return (w);
}
