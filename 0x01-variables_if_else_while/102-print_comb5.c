#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int val_1, val_2, val_3, val_4;

val_1 = val_2 = val_3 = '0';
val_4 = '1';

while (val_1 <= '9')
{
	while (val_2 <= '9')
	{
		while (val_3 <= '9')
		{
			while (val_4 <= '9')
			{
				if ((val_1 < val_3) || (val_1 == val_3 && val_2 < val_4))
				{
					putchar(val_1);
					putchar(val_2);
					putchar(' ');
					putchar(val_3);
					putchar(val_4);

				if (val_1 == '9' && val_2 == '8' && val_3 == '9' && val_4 == '9')
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
				}
				val_4++;
			}
			val_4 = '0';
			val_3++;
		}
		val_3 = '0';
		val_2++;
	}
	val_2 = '0';
	val_1++;
}
return (0);
}
