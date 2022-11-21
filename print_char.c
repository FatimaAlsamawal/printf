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
	_putchar(va_arg(list, int));
	return (1);
}
