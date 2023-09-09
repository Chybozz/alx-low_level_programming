#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowcase;

	lowcase = 'a';

	while (lowcase <= 'z')
	{
		if (lowcase != 'e' && lowcase != 'q')
		{
			putchar(lowcase);
		}
		lowcase++;
	}
	putchar('\n');
	return (0);
}
