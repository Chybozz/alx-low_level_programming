#include "main.h"
/**
 * _isalpha - return 1 when c lower or capital
 *
 * Description: use _putchar
 *
 * @c: collect character
 *
 * Return: 1 if c is lower or capital otherwise 0
 *
 */
int _isalpha(int c)
{
	char loweralpha, upperalpha;
	int numerical = 0;

	for (loweralpha = 'a'; loweralpha <= 'z'; loweralpha++)
	{
		for (upperalpha = 'A'; upperalpha <= 'Z'; upperalpha++)
		{
			if (loweralpha == c || upperalpha == c)
			{
				numerical  = 1;
			}
		}
	}
	return (numerical);
}
