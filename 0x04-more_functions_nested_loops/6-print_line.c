#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *@n: number of times the character '_' should be printed.
 *
 */

void print_line(int n)
{
	int l;

	for (l = n; l > 0; l--)
		_putchar('_');
	_putchar('\n');
}

