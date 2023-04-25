#include <stdio.h>
/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
*        separated by a comma followed by a space.
*
* Return: Always 0.
*/
int main(void)
{
int num;
unsigned long 1 = 0, 2 = 1, sum;
for (num = 0; num < 50; num++)
{
sum = 1 + 2;
printf("%lu", sum);
1 = 2;
2 = sum;
if (num == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
