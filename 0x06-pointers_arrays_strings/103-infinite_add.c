#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result length
 *
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, len1 = 0, len2 = 0, sum, carry = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > len2)
		k = len1;
	else
		k = len2;

	if (k + 1 > size_r)
		return (0);

	r[k] = '\0';

	for (k = k - 1; k >= 0; k--)
	{
		i--;
		j--;

		if (i >= 0)
			sum = n1[i] - '0';
		else
			sum = 0;

		if (j >= 0)
			sum += n2[j] - '0';

		sum += carry;
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry == 1)
	{
		if (k + 2 > size_r)
			return (0);

		while (k-- >= 0)
			r[0] = carry + '0';

		r[0] = carry + '0';
	}
	return (r);
}
