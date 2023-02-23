#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14 ten times,
 * followed by a new line
 */
void more_numbers(void)
{
	int i;
	int counter;
	
	for (counter = 0; counter < 10; counter++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i + '0');
			_putchar(i % 10 + '0');
		}

		_putchar('\n');
	}
}
