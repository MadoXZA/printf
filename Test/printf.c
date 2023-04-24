#include "main.h"

/**
 * _printf - print the thing into stantard output
 *		receiving the necesary arguments
 * @format: the input containing all speciifiers
 * Return: amount of chars printed
 */

int _printf(const char *format, ...)
{
	int count;
	convert_t form_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};
	va_list arg_list;


	if (format == NULL)
	{
	return (-1);
	}

	va_start(arg_list, format);
	count = parser(format, form_list, arg_list);
	va_end(arg_list);

	return (count);
}
