#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet_x10 - function that checks for lowercase character.
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
/* Check if character falls within the lowercase ASCII range */
if (c >= 'a' && c <= 'z') 
{
return 1; /* Character is lowercase */
} 
else 
{
return 0; /* Character is not lowercase */
}
}