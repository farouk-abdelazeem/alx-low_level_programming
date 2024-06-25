#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
/* Check if character falls within the lowercase ASCII range */
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1); /* Character is alpha */
}
else
{
return (0); /* Character is not alpha */
}
}
