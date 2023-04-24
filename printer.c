#include "main.h"
#include <unistd.h>
/**
 * _putchar - input to standard output written
 * @c: print char
 * Return: 1 on always (success) and -1 if error occurs
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
