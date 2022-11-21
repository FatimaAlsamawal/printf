#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: format output
 *
 * File: _printf.c
 * Auth: Zuhair Ahmed
 *
 * Return: done
 */
int _printf(const char *format, ...)
{
	int done;

	convert_to conver[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_dec},
		{"b", print_bin},
		{"u", print_unsigned},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	done = parser(format, conver, args);

	va_end(args);

	return (done);
}
