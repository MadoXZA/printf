#include "main.h"
/**
 * rev_string - string reverse
 * @src: print string
 * Return: reversed string to pointer
 */
char *rev_string(char *src)
{
	int len, f;
	char temp, *res;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
	return (NULL);
	_memcpy(res, src, len);
	for (f = 0; f < len; f++, len--)
	{
		temp = res[len - 1];
		res[len - 1] = res[f];
		res[f] = temp;
	}
	return (res);
}
/**
 * _memcpy - memory area copy
 * @dest: copy dest
 * @src: copy source
 * @n: copy bytes of number
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];

	return (dest);
}
/**
 * base_len - octal number calculated
 * @num: length calculated for number
 * @base: calculate by base
 * Return: length of number of integer
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int k;

	for (k = 0; num > 0; k++)
	{
		num = num / base;
	}
	return (k);
}
/**
 * write_base - written output sent
 * @str: string to parse
 */
void write_base(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		putchar(str[k]);
}
