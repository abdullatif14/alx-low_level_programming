#include "main.h"

/**
 * _sqrt_recursion - function that prints sqauare root of a number
 * @n: digit
 *
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - function that shows square root of a number
 * @n: digit value
 * @x: squared number
 *
 * Return: sqaure
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
