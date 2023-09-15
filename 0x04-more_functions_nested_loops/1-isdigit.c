#include "main.h"
/**
 * _isdigit -  checks if parameter is a digit or not
 *
 * @c: input value
 *
 * Return: (1) if its digit (0) if not
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
