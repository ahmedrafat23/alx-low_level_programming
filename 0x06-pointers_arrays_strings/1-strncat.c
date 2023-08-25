#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of bytes from src to concatenate.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	/* Find size of dest array */
	while (dest[c])
		c++;

	/**
	* src does not need to be null terminated
	* if it contains n or more bytes
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	/* Null terminate dest */
	dest[c + i] = '\0';

	return (dest);
}
