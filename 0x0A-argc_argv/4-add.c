#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks if its an integer
 * @s: string
 * Return: 1 otherwise 0
 */

int isInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')

	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - adds positive number
 * @argc: numbers in an argument
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))

		{

			printf("Error\n");

			return (1);
		}

		sum += atoi(argv[argc]);

	}

	printf("%d\n", sum);

	return (0);
}
