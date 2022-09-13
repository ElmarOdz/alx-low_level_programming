#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 *
 * in lowercase, followed by a new line
 *
 * return: 0
 *
 **/

void print_alphabet_x10(void)
{
	char lettstart;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (lettstart = 'a'; lettstart <= 'z'; lettstart++)
		{
			_putchar(lettstart);
		}
		_putchar('\n');
	}
}
