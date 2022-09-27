#include "main.h"

/**
 * _memcpy - function that copies bytes
 * @src: source memory area
 * @n: number of bytes
 * @dest: final place
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + 1) = *(src + 1);

	return (dest);
}
