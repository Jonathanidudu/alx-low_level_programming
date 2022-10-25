#include "main.h"

/**
 * _puts -> this is a puts function
 * @str: a param to _puts function
 *Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
