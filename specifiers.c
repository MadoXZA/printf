#include "main.h"

/**
 * print_char - character prints
 * @list: arguments listed
 * Return: amount of characters printed returned
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (10);
}

/**
 * print_string - stdoutput print string
 * @list: chars listed
 * Return: printed chars amount
 */

int print_string(va_list list)
{
	int k;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	return (k);
	}
/**
 * print_percent - Print percent
 * @list: arguments listed
 * Return: amount of chracters printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);

}
/**
 * print_integer - integer to be printed
 * @list: integer listed
 * Return: characters printed amount
 */
int print_integer(va_list list)
{
	int n, j = 1, len = 0;
	unsigned int num;

	n = va_arg(list, int);
	if (n < 0)
	{
	len += _putchar('-');
	num = n * -1;
	}
	else
		num = n;
	while (num / j > 9)
		j *= 10;
	while (j != 0)
	{
		len += _putchar('0' + num / j);
		num %= j;
		j /= 10;
	}
	return (len);
}
/**
 * print_unsigned - unsigned numbers printed
 * @list: arguments listed
 * Return: unsigned number of length
 */
int print_unsigned(va_list list)
{
	unsigned int num, n;
	int j = 1, len = 0;

	n = va_arg(list, unsigned int);
	num = n;
	while (num / j > 9)
		j *= 10;
	while (j != 0)
	{
		len += _putchar('0' + num / j);
		num %= j;
		j /= 10;
	}
	num = va_arg(list, unsigned int);
	if (n == 0)
	return (len);
	if (n < 1)
	return (-1);
	return (len);
}
