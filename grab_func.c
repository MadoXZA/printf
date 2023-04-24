#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * grab_func - grabs the printf function
 * @c: char to print
 * @args: argument to print
 *
 * Return: chars to be printed
 */

int grab_func(char c, va_list args)
{
	int k;

	print_t cspec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_d},
		{'i', print_i},
		{'o', print_octa},
		{'b', print_binary},
		{'x', print_lower_hex},
		{'u', print_u},
		{'X', print_higher_hex}
	};

	k = 0;

	while (cspec[k].ident)
	{
		if (cspec[k].ident == c)
			return (cspec[k].print(args));
		k++;
	}
	return (_putchar(c));
}
