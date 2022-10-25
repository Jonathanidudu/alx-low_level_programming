#include <stdio.h>

/**
 *main - The main entry to the programme
 *
 *Description: A programe that prints the alphabet in lower
 *case
 *
 *Return: return 0
 *
 */

int main(void)
{

char low_alpha;

for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
{
	putchar(low_alpha);

}

putchar('\n');

return (0);

}
