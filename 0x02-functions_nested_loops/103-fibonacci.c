#include <stdio.h>
/**
* main - finds and prints the sum of the even-valued terms
*        followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int z;
unsigned long int a, b, next, sum;
a = 1;
b = 2;
sum = 0;
for (z = 1; z <= 33; ++z)
{
if (a < 4000000 && (a % 2) == 0)
{
sum = sum + a;
}
next = a + b;
a = b;
b = next;
}
printf("%lu\n", sum);
return (0);
}
