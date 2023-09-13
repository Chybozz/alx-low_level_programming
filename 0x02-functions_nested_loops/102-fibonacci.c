#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: this program prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int m;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	printf("%ld, %ld, ", fib[0], fib[1]);

	for (m = 2; m < 50; m++)
	{
		fib[m] = fib[m - 1] + fib[m - 2];
		if (m == 49)
		{
			printf("%ld\n", fib[m]);
		}
		else
		{
			printf("%ld, ", fib[m]);
		}
	}
	return (0);
}
