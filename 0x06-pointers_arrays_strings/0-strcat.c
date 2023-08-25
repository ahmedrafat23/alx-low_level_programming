#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	char dest[50] = "Hello ";
	char src[] = "World!";

	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%s\n", _strcat(dest, src));

	return (0);
}
