#include "main.h"
/**
* _strcat - a function that concatenates two strings
* @dest: string value
* @src: string value
*
* Return: void
*/
char *_strcat(char *dest, char *src)
{
int s;
int z;
s = 0;
while (dest[s] != '\0')
{
s++;
}
z = 0;
while (src[z] != '\0')
{
dest[s] = src[z];
s++;
z++;
}
dest[s] = '\0';
return (dest);
}
