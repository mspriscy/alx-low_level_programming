#include <stdio.h>
/**
* main - fibonacci <3
*
* Purpose - no hardcode
*
* Return:  (Success)
*/
int main(void)
{
unsigned long int z;
unsigned long int fibo = 1;
unsigned long int num = 2;
unsigned long int l = 1000000000;
unsigned long int fibo1;
unsigned long int fibo2;
unsigned long int num1;
unsigned long int num2;
printf("%lu", fibo);
for (z = 1; z < 91; z++)
{
printf(", %lu", num);
num += fibo;
fibo = num - fibo;
}
fibo1 = (fibo / l);
fibo2 = (fibo % l);
num1 = (num / l);
num2 = (num % l);
for (z = 92; z < 99; ++z)
{
printf(", %lu", aft1 + (aft2 / l));
printf("%lu", aft2 % l);
num1 = num1 + fibo1;
fibo1 = num1 - fibo1;
num2 = num2 + fibo2;
fibo2 = num2 - fibo2;
}
printf("\n");
return (0);
}
