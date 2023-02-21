#include "main.h"

/**
 * print_alphabet_x10 -  prints alphabet in lowercase 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
