#include "main.h"

/**
 * _strspn - function that gets length of prefix subxtring
 * @s: number of bytes in the initial segement
 * @accept: consist bytes from s only
 *
 * Return: segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
	if (!accept[j])
		break;
}

