#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int val_1, val_2;

	val_1 = '0';
	val_2 = '0';

	while (val_1 <= '9')
	{
		while (val_2 <= '9')
		{
			if (val_1 < val_2)
			{
				putchar(val_1);
				putchar(val_2);
				if (val_1 != '8' || (val_1 == '8' && val_2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			val_2++;
		}
		val_1++;
		val_2 = '0';
	}
	putchar('\n');
	return (0);
}
