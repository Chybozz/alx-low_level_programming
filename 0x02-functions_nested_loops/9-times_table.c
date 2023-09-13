#include "main.h"
/**
 * times_table - function that prints 9 times table
 *
 * Description: prints with , and spaces
 *
 */
void times_table(void)
{
	int i, m, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (m = 1; m <= 9; m++)
		{
			n = i * m;

			if ((n / 10) > 0)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((n % 10) + '0');

			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
