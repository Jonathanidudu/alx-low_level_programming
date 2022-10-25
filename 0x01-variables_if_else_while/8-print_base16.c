#include <stdio.h>

/**
 *main - main block
 *
 *Description: this programme prints hexadecimal
 *
 *Return: return 0
 *
 */

int main(void)
{
int num;
int alpha;

{
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
}

{
for (alpha = 'a'; alpha < 'g'; alpha++)
putchar(alpha);
}

putchar('\n');
return (0);
}
