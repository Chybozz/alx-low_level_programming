#include "main.h"
/**
 * print_triangle -  function that prints a triangle
 *
 * @size: size of the triangle
 * if size is 0 or less, print only a new line
 * Use the character # to print the triangle
 */
void print_triangle(int size)
{
	int tg, tr;

	if (size > 0)
	{
		for (tg = 1; tg <= size; tg++)
		{
			for (tr = size - tg; tr > 0; tr--)
			{
				_putchar(' ');
			}
			for (tr = 0; tr < tg; tr++)
			{
				_putchar('#');
			}
			if (tg == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
