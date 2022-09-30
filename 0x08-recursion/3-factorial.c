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
	int n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	int main(void)
	/**
	 *  main - checking the factorial
	 */
	{
		int f;

		f = factorial(0);
		printf("0! = %d/n", f);
		return (0);
	}
}
