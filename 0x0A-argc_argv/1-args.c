#include <stdio.h>

/**
 * main - program prints the number of arguments passed
 * @argv: array that contains the program
 * @argc: number of command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
