#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numericals;

	numericals = '0';

	while (numericals <= '9')
	{
		putchar(numericals);
		if (numericals <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		numericals++;
	}
	putchar('\n');
	return (0);
}
