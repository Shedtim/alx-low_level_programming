#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = O;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = O; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
