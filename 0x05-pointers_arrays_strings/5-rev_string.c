#include "main.h"
/**
* rev_string - a function that reverses a string.
* @s: input string.
* Return: no return.
*/
void rev_string(char *s)
{
int count = 0, i, z;
char *str, temp;
while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
str = s;
for (i = 0; i < (count - 1); i++)
{
for (z = i + 1; z > 0; z--)
{
temp = *(str + z);
*(str + z) = *(str + (z - 1));
*(str + (z - 1)) = temp;
}
}
}
