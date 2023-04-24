#include "main.h"

/**
 * parser - f
 * @format: f
 * @form_list: f
 * @arg_list: fff
 * Return: ffffffffffffffff
 */
int parser(const char *format, convert_t form_list[], va_list arg_list)
{
	int k, l, r_val, count;

	count = 0;
	for (k = 0; format[k] != '\0'; k++)
	{
		if (format[k] == '%')
		{
			for (l = 0; form_list[l].sym != NULL; l++)
			{
				if (format[k + 1] == form_list[l].sym[0])
				{
					r_val = form_list[l].f(arg_list);
					if (r_val == -1)
					{
						return (-1);
					}
					count += r_val;
					break;
				}
			}
			if (form_list[l].sym == NULL && format[k + 1] != ' ')
			{
				if (format[k + 1] != '\0')
				{
					_putcar(format[k]);
					_putcar(format[k + 1]);
					count += 2;
				}
				else
				{
					return (-1);
				}
			}
			k++;
		}
		else
		{
			_putcar(format[k]);
			count++;
		}
	}
	return (count);
}
