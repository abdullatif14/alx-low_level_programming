#include "main.h"

/**
 * is_palindrome - an empty string
 * @s: string
 *
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks if a string is palindrome
 * @s: string
 * @start: start index
 * @end: end index
 * @flag: flag to indicate a palindrome
 *
 * Return: void
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursion - checks the lenght of a string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
