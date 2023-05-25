#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its paramters.
 * @n: the number of paramters passed to the function.
 * @...: a variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int z, sum = 0;
va_start(ap, n);
for (z = 0; z < n; z++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
