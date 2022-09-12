#include <stdio.h>

/* print alphabets in lowecase */
/* main entry point */
/* Description:"Print all letters in lowecase"*/ 
/* Return always 0 */

int main(void)
{
	char (lowcase);
	for (lowcase = 'a'; lowcase <= 'z' ; lowcase++)
	putchar(lowcase);
	putchar('\n');
	return (0);
}
