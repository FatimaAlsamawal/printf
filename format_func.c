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

/**
 * print_string - function print c
 *
 * @list: arguments
 *
 * Return: i
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(NULL)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * print_per - function print c
 *
 * @list: arguments
 *
 * Return: 1
 */
int print_per(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
