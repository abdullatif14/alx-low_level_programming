#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns factorial of a number
 * @n: number given
 *
 * Return: factorial
 */

int factorial(int n)
{
	int f;

	if (f < 0)
	{
		return (-1);
	}
	else if (f == 0)
	{
		return (1);
	}
	else
	{
		return (f * factorial(f - 1));
	}
}
