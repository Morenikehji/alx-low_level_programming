#include <stdio.h>
#include "main.h"

/**
 *main - entry point
 *
 *Desceiption: Prints Main with _putchar
 *
 *Return: always 0
 */

int main(void)
{
int i = 0;
char c;
char s[] = "Main\n";

while (i <= 9)
{
c = s[i];
_putchar(c);
i++;
}
return (0);
}
