#include "main.h"

/**
 * print_char - character prints
 * @list: arguments listed
 * Return: amount of characters printed returned
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
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
	int num = va_arg(list, int);
	int m = 1, len = 0;

	if (num < 0)
	{
		 _putchar('-');
		len++;
		if (num == -2147483648)
		{
			num++;
			num *= -1;
			_putchar('2');
			len++;
		}
		num *= -1;
	}
	for (m = 1; num / m  > 9; m *= 10)
	{
	}
	for (; m >= 1; m /= 10)
	{
		_putchar((num / m) + '0');
		num %= m;
		len++;
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
	return (len);
}
