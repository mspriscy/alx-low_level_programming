#include "main.h"
#include <stdio.h>

/**
* rot13 - a function that encodes using rot13
* @s: pointer 
*
* Return: *s
*/
char *rot13(char *s)
{
int k;
int z;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (k = 0; s[k] != '\0'; k++)
{
for (z = 0; z < 52; z++)
{
if (s[k] == data1[z])
{
s[k] = datarot[z];
break;
}
}
}
return (s);
}
