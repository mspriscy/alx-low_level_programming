#include "main.h"
/**
* _strcmp - a function that compares string values
* @s1: string value
* @s2: string value
*
* Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
int s;
s = 0;
while (s1[s] != '\0' && s2[s] != '\0')
{
if (s1[s] != s2[s])
{
return (s1[s] - s2[s]);
}
s++;
}
return (0);
}
