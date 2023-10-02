#include "main.h"
/**
 * _islower - detect lowercase and uppercase
 *
 * Description: use _putchar to print
 * @c: alphabets
 * Return: (1) if c is lower otherwise (0)
 *
 */
int _islower(int c)
{
	char alpha;
	int lowercase = 0;


	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
		{
			lowercase = 1;
		}
	}
	return (lowercase);
}
