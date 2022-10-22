#include <stdio.h>

/**
 * main - prints the size of various data types
 *
 * Return: returns zero if successful,  no zero otherwise
 *
 */

int main(void)

{

printf("size of a char :%ld byte(s)\n", sizeof(char));

printf("size of an int : %ld byte(s)\n", sizeof(int));

printf("size of a long int: %ld byte(s)\n", sizeof(long int));

printf("size of long long int : %ld byte(s)\n", sizeof(long long int));

printf("size of float : %ld byte(s)\n",  sizeof(float));

return (0);

}
