#include <stdio.h>

/**
 * main - Prints all base 16 numbers in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int num = '0';  /* Start with ASCII value of '0' */
int letter = 'a'; /* Start with ASCII value of 'a' */

while (num <= '9') /* Print numbers 0-9 */
{
putchar(num);
num++;
}

while (letter <= 'f') /* Print letters a-f */
{
putchar(letter);
letter++;
}

putchar('\n'); /* Print the newline character */

return (0);
}
