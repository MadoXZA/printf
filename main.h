#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct convert - structure for functions and symbols to print
 * @opp: the operator
 * @f: associated function
 */

struct convert
{
	char *opp;
	int (*f)(va_list);
};
typedef struct convert convert_t;

/* printf handle function types*/

int parser(const char *format, convert_t format_list[], va_list arg_list);
int _putchar(char c);
char *rev_string(char *src);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
int hex_check(int num, char x);
char *_memcpy(char *dest, char *src, unsigned int n);

/*print functions*/

int print_char(va_list list);
int print_string(va_list list);
int print_percentage(va_list list);
int print_interger(va_list list);
int print_binary(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hex_lower(va_list list);
int print_hex_upper(va_list list);

/* end desired func */

int _printf(const char *format, ...);

#endif
