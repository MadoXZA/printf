#include "main.h"

/**
 * _putcar - writes the input to stantard output
 * @c: char need to be printed
 * Return: 1 on Succes and -1 if error occured
 */

int _putcar(char c)
{
	return (write(1, &c, 1));
}
