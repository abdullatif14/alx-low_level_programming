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
	unsigned int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		for (i % 8 == 0 && i != 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
