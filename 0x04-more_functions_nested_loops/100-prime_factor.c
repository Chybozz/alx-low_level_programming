#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: finds and prints largest prime
 * factor of the number 612852475143
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	long prime = 612852475143, divi;

	while (divi < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (divi = 3; divi < (prime / 2); divi += 2)
		{
			if ((prime % divi) == 0)
				prime /= divi;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
