#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_alphabet_x10(void)
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