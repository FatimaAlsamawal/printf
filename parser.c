#include "main.h"

/**
 * parser - print a formated string.
 *
 * @format: string
 * @f_list: funcations
 * @arg_list: argument
 *
 * Return: Total
 */
int parser(const char *format, convert_to f_list[], va_list arg_list)
{
	int i, j, val, done;

	done = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					val = f_list[j].f(arg_list);
					if (val == -1)
						return (-1);
					done += val;
					break;
				}
			}

			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					done = done + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			done++;
		}
	}

	return (done);
}
