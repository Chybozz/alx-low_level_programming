#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowa;
	char uppA;

	lowa = 'a';
	uppA = 'A';

	while (lowa <= 'z')
	{
		putchar(lowa);
		lowa++;
	} while (uppA <= 'Z')
	{
		putchar(uppA);
		uppA++;
	}
	putchar('\n');
	return (0);
}
