#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to the destination string buffer
 * @src: pointer to the source string
 *
 * Description: This function copies the string pointed to by 'src'
 *              to the buffer pointed to by 'dest'.
 *
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
