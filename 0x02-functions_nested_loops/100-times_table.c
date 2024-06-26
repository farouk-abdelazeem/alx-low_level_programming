#include "main.h"

/*
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The size of the times table to print.
 */
void print_times_table(int n)
{
    int i, j, result;

    /* Check if n is within the valid range (0 to 15) */
    if (n > 15 || n < 0) {
        return;
    }

    /* Iterate through rows */
    for (i = 0; i <= n; i++) {

        /* Iterate through columns */
        for (j = 0; j <= n; j++) {
            result = i * j;

            /* Print the result with proper formatting */
            if (result > 99) {
                _putchar(result / 100 + '0');  /* Hundreds digit */
                _putchar((result / 10) % 10 + '0'); /* Tens digit */
            } else if (result > 9) {
                _putchar(' ');
                _putchar(result / 10 + '0');  /* Tens digit */
            } else if (j > 0) { /* Add spaces for single-digit numbers except the first */
                _putchar(' ');
                _putchar(' ');
            }
            
            _putchar(result % 10 + '0'); /* Units digit */

            /* Print comma and space, unless it's the last number in the row */
            if (j != n) {
                _putchar(',');
                _putchar(' ');
            }
        }
        
        _putchar('\n'); /* Move to the next line after each row */
    }
}
