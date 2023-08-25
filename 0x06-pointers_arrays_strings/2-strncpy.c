#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Pointer to destination input buffer.
 * @src: Pointer to source input buffer.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	* Iterate through src array
	* If there is no null byte among the first n bytes of source,
	* the string placed in dest will not be null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/**
	* If the length of source is less than n,
	* write additional null bytes to dest to
	* ensure that a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
