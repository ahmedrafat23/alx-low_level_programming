#include <stdio.h>
/**
 * main - entry point
 *
 * Descripyion: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
 */

int main(viod)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a - z*/ 
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
