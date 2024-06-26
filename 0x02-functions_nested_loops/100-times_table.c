#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * @n: int type number
 */
void print_times_table(int n)
{
    int i, j, result;

    if (n > 15 || n < 0) 
        return;

    for (i = 0; i <= n; i++) 
    {
        for (j = 0; j <= n; j++) 
        {
            result = i * j;

            // Print result directly as characters:
            if (result > 99) 
            {
                _putchar('0' + (result / 100));
                _putchar('0' + ((result / 10) % 10));
            }
            else if (result > 9) 
            {
                _putchar(' ');
                _putchar('0' + (result / 10));
            } 
            else if (j > 0) // Add space before single-digit numbers except the first
            {
                _putchar(' ');
                _putchar(' ');
            }

            _putchar('0' + (result % 10));

            // Comma and space handling (same as before):
            if (j != n) 
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
