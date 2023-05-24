#include <stdio.h>
#include <stdlib.h>

/**
 * main -a program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int bytes, s;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
arr = (char *)main;
for (s = 0; s < bytes; s++)
{
if (s == bytes - 1)
{
printf("%02hhx\n", arr[s]);
break;
}
printf("%02hhx ", arr[s]);
}
return (0);
}
