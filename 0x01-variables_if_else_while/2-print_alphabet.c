#include <stdio.h>
/**
 * main - entry point
 *
 * description: print all aplhabet letters
 *
 * return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
