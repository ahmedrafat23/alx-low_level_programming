#include "main.h"
/**
 * **alloc_grid - returns a pointers to a 2 demenional array of integers.
 * @width: int
 * @heigth: int
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **tab, i, j;
	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab ==0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * wigth);
			if (tab[i] == 0)
			{
				/*free everthing if malloc fails*/
				while (i--)
					free(teb[i]);
				free(tab);
				return (NULL);
			}

			for (j = 0; j < widtg; j++)
				tab[i][j] = 0;
		}
	}

	return (tab);
}
