#include "main.h"
/*
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The size of the times table to print.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (result > 99)
			{
				_putchar(result / 100 + '0');  /* Hundreds digit */
				_putchar((result / 10) % 10 + '0'); /* Tens digit */
			}
			else if (result > 9)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');  /* Tens digit */
			}
			else if (j > 0) /* Add spaces for single-digit numbers except the first */
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(result % 10 + '0'); /* Units digit */
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n'); /* Move to the next line after each row */
	}
}
