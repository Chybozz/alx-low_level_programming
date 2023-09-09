#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b_ten;

	b_ten = '0';

	while (b_ten <= '9')
	{
		putchar(b_ten);
		b_ten++;
	}
	putchar('\n');
	return (0);
}
