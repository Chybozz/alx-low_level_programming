#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets x10
 *
 * Description: print using _putchar
 *
 */
void print_alphabet_x10(void)
{
	char lower_alpha = 'a';
	int multiplier = 0;

	for (multiplier = 0; multiplier < 10; multiplier++)
	{
		for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
		{
			_putchar(lower_alpha);
		}
		_putchar('\n');
	}
}
