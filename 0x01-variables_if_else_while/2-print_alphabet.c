#include <stdio.h>

/* print alphabets in lowecase */
/* main entry point */
/* Return always 0 */

int main(void) 
{
	char (lowcase);
	for (lowcase = 'a'; lowcase <= 'z' ; lowcase++)
		putchar(lowcase);
	putchar('\n');

	return (0);
}
