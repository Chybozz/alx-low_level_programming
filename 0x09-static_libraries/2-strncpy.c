#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: parameter value
 * @src: parameter value
 * @n: parameter value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cpy;

	cpy = 0;
	while (cpy < n && src[cpy] != '\0')
	{
		dest[cpy] = src[cpy];
		cpy++;
	}

	while (cpy < n)
	{
		dest[cpy] = '\0';
		cpy++;
	}
	return (dest);
}
