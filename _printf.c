#include "main.h"

/**
 * _printf - print char into standard output
 * @format: input with all specifiers
 * Return: the number of chars printed
 */

int _printf(const char *format, ...)
{
	int count;
	convert_t format_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex_lower},
		{"X", print_hex_upper},
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg_list, format);
	count = parser(format, format_list, arg_list);
	va_end(arg_list);

	return (count);
}
