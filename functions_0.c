<<<<<<< HEAD
#include "main.h"

/**
 * print_char - char printed
 * @args: arguments listed
 * Return: number of character printed
 */
int print_char(va_list args)
{
	int drone;

	drone = va_arg(args, int);
	return (_putchar(drone));
}

/**
 *print_string - string printed
 *@args: arguments listed
 * Return: print number of chars
 */
int print_string(va_list args)
{
	int k, count;
	char *str;

	count = 0;
	str = va_arg(args, char *);

	if (str == NULL)
	str = "(null)";
	count = 0;
	while (str[k] != '\0')
	{
	_putchar(str[k])
	k++;
	count++;
	}
	return (count);
}

/**
 *print_percent - percent to be printed
 *@args: arguments listed
 *Return: prints number of characters
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
	return (*str);
	}
	return (_putchar(*str));
	}

/**
 * print_d - prints the integer
 *@args: arguments listed
 * Return: prints number of chars
 */
int print_d(va_list args)

	unsigned int black, white, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);

	if (n < 0)
	{
		black = (n * -1);
		count += _putchar('-');
	}
	else
	black = n;
	white = black;
	countnum = 1;

	while (white > 9)

	white /= 10;
	countnum *= 10;

	while (countnum >= 1)
	{
		count += _putchar(((black / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}

/**
 * print_i - prints integer
 * @args: interger argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}
=======
>>>>>>> f5afe07b78ca91f190a33cbd805cf59b6b08e10e
