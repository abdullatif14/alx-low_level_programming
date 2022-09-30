#include "main.h"

/**
 * _pow_recursion - gives power of a number
 * @x: digit
 * @y: index number
 *
 * Return: value of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
