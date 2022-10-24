#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - The starting pount of the programme
 *
 * Description - The programme returns a random value each time
 * it is ran
 *
 * Return: return 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("\n %d is negative", n);
	return (0);
}
