#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: an input string
 *
 * @src: an input string
 *
 * @n: an input integer
 *
 * Return: A pointer to the resulting string
 *
 **/

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	m = 0;
	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
