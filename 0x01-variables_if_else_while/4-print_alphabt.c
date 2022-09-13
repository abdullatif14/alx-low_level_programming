#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 * Main: entry function
 * Description: print alphabets in lowercase followed by new line
 * Return (0) sueccess
*/

int main(void) /*Entry Function*/
{
	char lown, e, q;

	e = 'e';
	q = 'q';

	for (lown = 'a'; lown <= 'a'; lown++)

	{
		if (lown != e && lown != q)
			putchar (lown);
	}
	putchar('\n');

	return (0);
}
