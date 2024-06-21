#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'a';

while (alpha <= 'z')
{
if (alpha == 'e' || alpha == 'q')
{
alpha++;

}
else
{
putchar(alpha);
alpha++;
}

}
putchar('\n');

	return (0);
}
