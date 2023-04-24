#include "main.h"

/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: return the amount of characters printed
 */

int print_char(va_list list)
{
	_putcar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints string to a stdoutput
 * @list: list of chars
 * Return: amount of chars printed
 */


int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putcar(str[i]);
	}
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putcar('%');
	return (1);
}
