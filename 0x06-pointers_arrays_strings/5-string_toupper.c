#include "main.h"
/**
* string_toupper - a function that changes all lowercase letters to uppercase
* @n: pointer
*
* Return: n
*/
char *string_toupper(char *n)
{
int s;
s = 0;
while (n[s] != '\0')
{
if (n[s] >= 'a' && n[s] <= 'z')
n[s] = n[s] - 32;
s++;
}
return (n);
}
