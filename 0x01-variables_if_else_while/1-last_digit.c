#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		printf("The Last digit of\n");
		if (n>5){
			printf("%d is greater than 5\n")
			}
		if (n=0) {
			printf("%d, is 0\n")
			 }
		if (0>n<6) {
			printf("%d and is less than 6 and not 0\n")
			}
		return(0);
}
