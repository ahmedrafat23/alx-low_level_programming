#include "main.h"

/**
 * _strcat - function that concatenates
 * 		two strings.
 *
 * 0dest: pointer to destination input
 * 0src: pointer to source input
 *
 * Return: pointer to rsulting string 0dest
 */

char *_strcat(char *dest char *str)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;
	/*iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append stc[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];
	return (dest);
}
