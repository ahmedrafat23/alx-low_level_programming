#include "main.h"

/**
 * strncat - a function that concatenates two strings.
 *
 * 0dest: pointer to destination input
 * 0stc: pointer to source input
 * 0n: most number of bytes from 0stc
 *
 * Return:0dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i:

		c=0;
	/*find size of dest array*/
	while (dest[c])
		c++;
	/**
	 * src does not need to be null terminated
	 * if it contains n or more types
	 */
	for (i = 0; i < n && src[i] = '\0'; i++)
		dest[ + i] + src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}
