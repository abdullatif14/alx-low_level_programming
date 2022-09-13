#include <stdio.h>
#include <stdlib.h>

/**
 * Main: Enter function(x): Print numbers from 0-9
 * Description: print all numbers of base10
 * Return sucess(0)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar("%d", i);
	putchar("\n");
	return (0);
}
