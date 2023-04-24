#include "main.h"

/**
 * print_binary - binary conversion
 * @list: the binary list
 * Return: lenght of number thats binary
 */

int print_binary(va_list list)
{
	unsigned int num;
	int k, len;
	char *str, *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (-1);

	for (k = 0; num > 0; k++)
	{
		str[k] = (num % 2) ? '1' : '0';
		num /= 2;
	}

	str[k] = '\0';
	rev_str = rev_string(str);

	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(str);
	free(rev_str);

	return (len);
}

/**
 * print_octal - prints the numeric of a number in octal
 * @list: list arguments to pass
 * Return: number of symbols to be printed
 */

int print_octal(va_list list)
{
	unsigned int num;
	int len;
	char *octal_rep;
	char *rev_str;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		num = num / 8;
	}

	octal_rep[len] = '\0';
	rev_str = rev_string(octal_rep);

	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}

/**
 * print_hex_lower - prints a decimat number in lowercasr
 * @list: list  of arguments to pass
 * Return: number of printed chars
 */

int print_hex_lower(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	if (num < 1)
		return (-1);

	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);

	if (hex_rep == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * print_hex_upper - prints decimal number in uppercase
 * @list: list of arguments
 * Return: number of chars printed
 */

int print_hex_upper(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - check which hex function is being called
 * @num: number convert to letter
 * @x: which hex function to call
 * Return: Ascii value for the letter
 */

int hex_check(int num, char x)
{
	char *hex = "abcdefg";
	char *HEX = "ABCDEFG";

	num = num - 10;

	if (x == 'x')
		return (hex[num]);
	else
		return (HEX[num]);
	return (0);
}
