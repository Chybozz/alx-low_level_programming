#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to print from n to 98
 *
 * @n: the value
 *
 * Description: to print numbers upto 98
 */
void print_to_98(int n)
{
	int j;

	if (n <= 98)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);

			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);

			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
