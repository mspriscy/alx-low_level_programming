#include "main.h"
#include <stdio.h>
/**
* print_buffer - a function that prints a buffer
* @b: buffer
* @size: size
* Return: void
*/
void print_buffer(char *b, int size)
{
int s, k, z;
s = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (s < size)
{
k = size - s < 10 ? size - s : 10;
printf("%08x: ", s);
for (z = 0; z < 10; z++)
{
if (z < k)
printf("%02x", *(b + s + z));
else
printf("  ");
if (z % 2)
{
printf(" ");
}
}
for (z = 0; z < k; z++)
{
int c = *(b + s + z);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
s += 10;
}
}
