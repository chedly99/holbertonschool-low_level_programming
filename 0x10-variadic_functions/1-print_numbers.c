#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints number,
* @separator: The string to be printed
* @n: number of integers
* @...: variable number
*/
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index, sum = 0;
va_start(nums, n);
for (index = 0; index < n; index++)
sum += va_arg(nums, int);
va_end(nums);
return (sum);
}
