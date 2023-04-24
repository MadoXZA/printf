#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/


struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert convert_t;


/* printf function handle types */
int parser(const char *format, convert_t form_list[], va_list arg_list);
int _putcar(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);

/* desire end function */
int _printf(const char *format, ...);

#endif
