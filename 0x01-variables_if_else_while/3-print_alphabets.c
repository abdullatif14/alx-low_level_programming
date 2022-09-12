#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main entry 
 *Description:A script that prints letters in both lowercase and uppercase
 *Return (0) success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
