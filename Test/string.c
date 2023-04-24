#include "main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	(void) len;
	(void) len2;
	return (0);
}
