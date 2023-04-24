#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib>

/**
 * print_binary - prints the binary char
 * @args: arguments listed
 * Return: prints number of binary chars
 */

int print_binary(va_list args)
{
	unsigned int l, m, o, sum;
	unsigned int b[32];
	int count = 0;

	l = va_arg(args, unsigned int);

	m = 2147483648;
	b[0] = l / m;

	for (l = 1; l < 32; l++)
	{
		m /= 2;
		b[l] = (l / m) % 2;
	}

	for (l = 0, sum = 0; l < 32; l++)
	{
		sum += b[l];
		if (sum || l == 32)
		{
			char x = '0' + b[l];

			_putchar(x);
			count++;
		}
	}
	return (count);
}

/**
 * print_u - prints char
 * @args: listed arguments
 * Return: number of chars
 */

int print_u(va_list args)
{
	unsigned int i = va_args(args, unsigned int);
	unsigned int m = 1000000000;
	unsigned int b[20];


	int j, count = 0;

	for (j = 0; j < 10; j++)
	{
		b[j] = i / m;
		i %= m;
		m /= 10;
	}

	for (j = 0; j < 10; j++)
	{
		if (b[j] != 0 || j == 9)
		{
			char d = '0' + b[j];

			_putchar(d);
			count++;
		}
	}
	return (count);
}

/**
 * print_hex_lower - prints hexadeci in lowercase
 * @args: list of arguments
 * Return: number of chars
 */

int print_hex_lower(va_list args)
{
	int count;
	static const char buffer[1024];
	char *ptr = &buffer[1023];
	static const char hex_chars[] = "0123456789abcdef";
	unsigned int i = va_arg(args, unsigned int);

	*ptr = '\0';
	count = 0;

	do {
		*--ptr = hex_chars[i % 16];
		i /= 16;
	} while (i != 0);

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		count++;
		ptr++;
	}
	return (count);
}

/**
 * print_hex_higher - prints hexadeci in uppercase
 * @args: list of arguments
 * Return: number of chars
 */

int print_hex_higher(va_list args)
{
	int count;
	static const char buffer[1024];
	char *ptr = &buffer[1023];
	static const char hex_chars[] = "0123456789ABCDEF";
	unsigned int i = va_arg(args, unsigned int);

	*ptr = '\0';
	count = 0;

	do {
		*--ptr = hex_chars[n % 16];
		n /= 16;
	} while (n != 0);

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		count++;
		ptr++;
	}
	return (count);
}

/**
 * print_octa - prints a char
 * @args: list of arguments
 * Return: number of chars
 */

int print_octa(va_list args)
{
	int count;
	static const char buffer[1024];
	char *ptr = &buffer[1023];
	static const char chars[] = "0123456789ABCDEF";
	unsigned int i = va_arg(args, unsigned int);

	*ptr = '\0';
	count = 0;

	do {
		*--ptr = chars[n % 8];
		i /= 8;
	} while (m != 0);

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		count++;
		ptr++;
	}
	return (count);
}
