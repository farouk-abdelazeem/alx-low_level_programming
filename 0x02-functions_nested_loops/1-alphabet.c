#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }

    putchar('\n');  /* This line ensures a newline at the end */ 
}