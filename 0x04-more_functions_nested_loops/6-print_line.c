#include "main.h"

/**
 * print_line - draws a straight line in the terminal,
 * @n: number of times the character _ should be printed
 * followed by a new line
 */
void print_line(int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
