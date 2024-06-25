#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and UPPERCASE.
 *
 * Return: Always 0 (Success)
 */
int main(void)
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
	return (0);
}
