#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int n;
	int mdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	mdgt = n % 10;
	if (mdgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mdgt);
	if (mdgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, mdgt);
	if (mdgt < 6 && mdgt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mdgt);
	return (0);
}
