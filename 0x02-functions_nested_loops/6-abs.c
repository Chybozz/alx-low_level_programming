#include "main.h"
/**
 * _abs - absolute value function of an int
 *
 * @r: the value
 *
 * Description: standard library function
 *
 * Return: (0)
 */
int _abs(int val)
{
	if (val >= 0)
	{
		return (val);
	}
	else
	{
		return (val * -1);
	}
}
