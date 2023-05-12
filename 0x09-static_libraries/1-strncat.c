#include "main.h"
/**
* _strncat - a function that concatenates two strings
* @dest: string value
* @src: string value
* @n: string value
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int s;
int z;
s = 0;
while (dest[s] != '\0')
{
s++;
}
z = 0;
while (z < n && src[z] != '\0')
{
dest[s] = src[z];
s++;
z++;
}
dest[s] = '\0';
return (dest);
}
