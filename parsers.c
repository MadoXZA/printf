#include "main.h"
/**
 * parsers - calculates amount of char printed
 * @format: string input contain format
 * @form_list: format lists
 * @arg_list: arguments listed
 * @
 * Return: print character amount
 */
int parser(const char *format, convert_t form_list[], va_list arg_list)
{
	int k, m, r_val, count;

	count = 0;
	for (k = 0; format[k] != '\0'; k++)
	{
	if (format[k] == '%')
	{
		
	for (m = 0; form_list[m].type != 0; k++)
	{

		if (format[k + 1] == *form_list[k].type)
		{
			r_val = form_list[m].f(arg_list);
			if (r_val == -1)
			return (-1);
			count += r_val;
			break;
		}
	}
	if (form_list[m].type == 0 && format[k + 1] != ' ')
	{
		if (format[k + 1] != '\0')
		{
			_putchar(format[k]);
			_putchar(format[k + 1]);
			count += 2;
		}
		else
			return (-1);
		}
		k++;
	}
		else
		{
		_putchar(format[k]);
		count++;
		}
	}
	return (count);
}
