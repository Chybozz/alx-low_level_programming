#include "main.h"
/**
 * reverse_array - function that reverses the content of an array
 * @a: array
 * @n: number of array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
