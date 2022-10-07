#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates the memory
 * @b: unsigned int
 *
 * Return: pointer to the alllocated memory
 */

void *malloc_checked(unsigned int b)
{
	char b;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
