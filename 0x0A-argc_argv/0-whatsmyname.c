#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argv: array that contains the cmd line arguments
 * @argc: number of command line arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s/n", argv[0]);
	return (0);
}
