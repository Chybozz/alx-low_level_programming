#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: finds and prints the sum of the even value terms
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int z, m = 1, n = 2, sum = 0, totalsum = 0;

	for (z = 0; z < 49; z++)
	{
		if ((n % 2 == 0) && (n <= 4000000))
		{
			totalsum = totalsum + n;
		}
		sum = m + n;
		m = n;
		n = sum;
	}
	printf("%ld\n", totalsum);
	return (0);
}
