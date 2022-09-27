#include "main.h"

/**
 * print_chessboard - function that prints chessboard
 * @a: pointer to pieces to print
 *
 * Return; success
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
