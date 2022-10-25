#include <stdio.h>

/**
 *main - The entry point of the programme
 *
 *Description: A programme that print alphabets in both cases
 *
 *Return: return 0
 *
 */

int main(void)
{
char low_bet;
char up_bet;

{
for (low_bet = 'a'; low_bet <= 'z'; low_bet++)
	putchar(low_bet);
}

{
for (up_bet = 'A'; up_bet <= 'Z'; up_bet++)
	putchar(up_bet);
}

putchar('\n');
return (0);
}
