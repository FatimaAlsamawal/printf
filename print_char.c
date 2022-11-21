#include "main.h"

/**
 * print_char - function print c
 *
 * @list: arguments
 *
 * Return: 1
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}
