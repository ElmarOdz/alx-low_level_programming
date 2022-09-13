#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0
 *
**/

void print_alphabet(void)
{
	char lettstart;

	lettstart = 'a';

	while (lettstart <= 'z')
	{
		_putchar(lettstart);
		lettstart++;
	}
	_putchar('\n');
}
