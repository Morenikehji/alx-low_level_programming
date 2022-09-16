#include "main.h"
#include <stdio.h>

/**
 * print_lines - print straight line n times
 * @n: character value to be executed
 * Return: void
 */

void print_lines(int n)
{
int co;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= n; co++)
{
putchar('_');
}
_putchar('\n');
}
}
