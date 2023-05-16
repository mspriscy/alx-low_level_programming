#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *conct;
int z, k;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
z = k = 0;
while (s1[z] != '\0')
z++;
while (s2[k] != '\0')
k++;
conct = malloc(sizeof(char) * (z + k + 1));
if (conct == NULL)
return (NULL);
z = k = 0;
while (s1[z] != '\0')
{
conct[z] = s1[z];
k++;
}
while (s2[k] != '\0')
{
conct[z] = s2[k];
z++, k++;
}
conct[z] = '\0';
return (conct);
}
