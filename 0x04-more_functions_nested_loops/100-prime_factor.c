#include <stdio.h>
#include <math.h>
/**
* main - finds and prints the largest prime factor of the number 612852475143
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
long int n;
long int b;
long int c;
n = 612852475143;
b = -1;
while (n % 2 == 0)
{
b = 2;
n /= 2;
}
for (c = 3; c <= sqrt(n); c = c + 2)
{
while (n % c == 0)
{
b = c;
n = n / c;
}
}
if (n > 2)
b = n;
printf("%ld\n", b);
return (0);
}
