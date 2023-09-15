#include "main.h"
/**
 * print_line -  Draws a straight line in the terminal
 *@n: Number of times the line is printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int val;

		for (val = 1; val <= n; val++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
