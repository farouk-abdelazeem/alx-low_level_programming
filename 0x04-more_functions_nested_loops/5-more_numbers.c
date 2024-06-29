#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by \n.
 *
 */

void more_numbers(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			c = b / 10;
			d = b % 10;
			if (c != 0)
			_putchar(c + '0');
			_putchar(d + '0');
		}
		_putchar('\n');
	}
}

