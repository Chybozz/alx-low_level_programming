#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int lng = 0;
	int z = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		lng++;
	}
	z = lng - 1;
	for (x = 0 ; x <= z ; x++)
	{
		if (x % 2 == 0)
	{
		_putchar(str[x]);
	}
	}
	_putchar('\n');
}

