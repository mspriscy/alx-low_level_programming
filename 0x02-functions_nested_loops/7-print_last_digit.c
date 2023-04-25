#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @z: the int to extract the last digit from
* Return: value of the last digit
*/
int print_last_digit(int z)
{
int a;
if (z < 0)
z = -z;
a = z % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
