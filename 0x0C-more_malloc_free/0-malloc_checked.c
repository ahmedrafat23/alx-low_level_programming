#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and exits if failed
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
	exit(98);

	return (m);
}
