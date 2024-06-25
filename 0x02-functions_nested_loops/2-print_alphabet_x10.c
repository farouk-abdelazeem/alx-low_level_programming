#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{    
char alpha = 'a';
int times = 0;

while (times < 10)
{

while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');  /* This line ensures a newline at the end */
}
}