#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numeric;
	char alpha;

	numeric = '0';
	alpha = 'a';

	while (numeric <= '9')
	{
		putchar(numeric);
		numeric++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
