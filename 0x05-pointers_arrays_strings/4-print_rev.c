#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lng = 0;
	int x;

	while (*s != '\0')
	{
		lng++;
		s++;
	}
	s--;
	for (x = lng; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
