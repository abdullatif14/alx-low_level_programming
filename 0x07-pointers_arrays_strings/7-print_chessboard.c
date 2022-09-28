#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints chessboard
 * @a: pointer to pieces to print
 *
 * Return; success
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
