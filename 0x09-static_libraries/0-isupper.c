#include <stdio.h>
/**
 * _isupper - detecting upper case characters
 *
 * @c: input character
 *
 * Return: (1) for yes (0) no
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
