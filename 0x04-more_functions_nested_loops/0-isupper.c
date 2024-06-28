#include "main.h"

/**
 * _isupper - uppercase letters
 * @letter: character te check
 *
 * Return: 0 or 1
 */
int _isupper(int letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	else
		return (0);
}
