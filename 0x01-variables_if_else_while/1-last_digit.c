#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *main - The entry point of the programme
 *
 *Description - gets and prints the last digit of a random
 * stored in variable n
 *
 *Return: return 0 at successful compilation
 *
 */

int main(void)
{
int n;
int digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = abs(n) % 10

if (digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, digit);

else if (digit == 0)
printf("Last digit of %d is %d and is 0\n", n, digit);

else if (digit < 6 && digit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0", n, digit);

return (0);
}
