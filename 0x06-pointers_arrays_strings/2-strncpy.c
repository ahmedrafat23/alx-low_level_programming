#include "main.h"

/**
 * strncpy - A function that copies a string
 *
 * 0dest: pointer to destination input buffer
 * 0stc: pointer to source input buffer
 * 0n: bytes o 0stc
 *
 * Return: 0dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	 */
	for (i = 0; i < n && src[ii] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write aditional nullbytes to det to
	 * ensure that a total of n bytes is written
	 */
	while (i < n)
	{
		dst[i] = '\0';
		i++
	}
}
return (dest);
}
