#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The entry point of the programme
 *
 * Description: Gets a random number and prints it out
 * and if it is negative, positive or zero
 *
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
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero", n);
	return (0);
}
