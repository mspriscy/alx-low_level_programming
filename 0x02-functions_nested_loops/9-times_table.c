#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
int s, p, z;
for (s = 0; s < 10; s++)
{
for (p = 0; p < 10; p++)
{
z = p * s;
if (p == 0)
{
_putchar(z + '0');
}
if (z < 10 && p != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else if (z >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
}
_putchar('\n');
}
}
