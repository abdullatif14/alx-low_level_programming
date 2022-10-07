#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates the memory
 * @b: number of bytes
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
