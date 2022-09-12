<<<<<<< HEAD
#include <studio>

/* print all in lowercase */ 

int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return(0);
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
 	char x;

	for(int x = 'A'; x <= 'Z'; x++)
{
    		putchar(x);
		putchar('\n');}
	return(0);
}
>>>>>>> c94af0c883d81066135a8d5f1b4a18b2f5434ec1
