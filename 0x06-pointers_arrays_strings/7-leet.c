#include "main.h"
/**
* leet - a function that encodes into 1337
* @n: value
* Return: n value
*/
char *leet(char *n)
{
int s, z;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (s = 0; n[s] != '\0'; s++)
{
for (z = 0; z < 10; z++)
{
if (n[s] == s1[z])
{
n[s] = s2[z];
}
}
}
return (n);
}
