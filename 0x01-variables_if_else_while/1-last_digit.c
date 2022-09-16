#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints the last digit of random number
 * Return -Always 0 (Success)
 */

int main(void)
{
	int n;
	int L;

	srand(time(0));
	n = rand() - RAND_MAX /	2;
	L = n % 10;

	else if (L > 5)
		printf("%s %d is %d and is greater than 5\n", n, L);
	else if (L == 0)
		printf("%s %d is %d and is 0\n", n, L);
	else if (L < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", n, L);
	return  (0);
}
