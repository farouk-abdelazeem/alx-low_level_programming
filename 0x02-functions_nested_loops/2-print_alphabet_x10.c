
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet 10 times
 * Return: Always 0 (Success)
 */


void print_alphabet_x10(void)
{
int times = 0;

while (times < 10)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
times++;
}
}