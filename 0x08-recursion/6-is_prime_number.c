#include "main.h"

/**
 * is_prime_number - prints prime numbers
 * @n: interger
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - prints prime numbers
 * @n: digit value
 * @start: number to be checked
 *
 * Return: 1 if prime
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}