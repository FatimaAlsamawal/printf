#include "main.h"

/**
 * print_char - function print c
 *
 * @list: arguments
 */
int print_char(va_list list)
{
	int ptr = va_arg(list, int);
	write(1, &ptr, 1);
	return (1);
}

/**
 * print_string - function print c
 *
 * @list: arguments
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
		write(1, &str[i], 1);
	}
	return (i);
}

/**
 * print_per - function print c  
 *
 * @list: arguments 
 */
int print_per(__attribute__((unused))va_list list)
{
	char ptr = '%';

	write(1, &ptr,1);
	return (1);
}
