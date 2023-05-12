#include "main.h"
/**
* _strlen - a function that returns the length of a string
* @s: string pointer
* Return: length of a string
*/
int _strlen(char *s)
{
int z = 0;
while (*s != '\0')
{
z++;
s++;
}
return (z);
}
