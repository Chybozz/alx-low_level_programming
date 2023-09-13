#include "main.h"
/**
 * print_last_digit - get the last digit number
 *
 * @val: integer input
 *
 * Description: print with _putchar
 *
 * Return: last digit of val
 *
 */
int print_last_digit(int val)
{
	int i;

	if (val < 0)
	{
		i = -1 * (val % 10);
	}
	else
	{
		i = val % 10;

	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
