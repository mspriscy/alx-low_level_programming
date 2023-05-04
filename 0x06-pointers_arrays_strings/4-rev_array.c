#include "main.h"
/**
* reverse_array - a function that reverses the content of an array of integers
* @a: array of integers
* @n: number of elements of array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
int s;
int z;
for (s = 0; s < n--; s++)
{
z = a[s];
a[s] = a[n];
a[n] = z;
}
}
