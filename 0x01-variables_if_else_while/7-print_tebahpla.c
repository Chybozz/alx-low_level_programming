#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowreverse;

	lowreverse = 'z';

	while (lowreverse >= 'a')
	{
		putchar(lowreverse);
		lowreverse--;
	}
	putchar('\n');
	return (0);
}
