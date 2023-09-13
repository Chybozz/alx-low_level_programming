#include "main.h"
/**
 * print_times_table - prints the n times table, beginning with 0.
 *
 * @n: the number
 *
 * Description: the function to print n times table.
 */
void print_times_table(int n)
{
	int ans, y, z;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (y = 0; y <= n; y++)
	{
		for (z = 0; z <= n; z++)
		{
			ans = y * z;

			/* Adjust spacing based on answer*/
			if (z > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (ans < 10)
					_putchar(' ');
				if (ans  < 100)
					_putchar(' ');
			}

			/* Prints the answer*/
			if (ans >= 100)
				_putchar(ans / 100 + '0');
			if (ans >= 10)
				_putchar(((ans / 10) % 10) + '0');
			_putchar(ans % 10 + '0');
		}
		_putchar('\n');
	}
}
