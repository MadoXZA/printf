#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list d;
	int k, count;

	if (format == NULL)
		return (0);

	count = 0;
	va_start(d, format);
	for (k = 0; format[k]; k++)
	{
		if (format[k] == '%')
		{
			count += grab_func(format[k + 1], d);
			k++;
		}

		else if (format[k] == '%' && format[k + 1] == '%')
		{
			count += _putchar(format[k] + format[k]);
		}

		else
			count += _putchar(format[k]);
	}
	va_end(d);
	return (count);
}
