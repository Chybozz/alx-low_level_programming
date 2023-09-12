#include "main.h"
/**
 * print_sign - to print sign of a value
 *
 * Description: to return the value of n at different conditions
 *
 * @n: the value to return
 *
 * Return: 0 or  1 at each conditions
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
