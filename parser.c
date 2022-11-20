#include "main.h"

/**
 * parser - print a formated string.
 *
 * @format: string
 * @f_list: funcations
 * @argument
 *
 * Return: Total
 */
int parser(const char *format, convert_to f_list[], va_list arg_list)
{
	int i, j, val, done = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for ( j = 0 ; f_list[i].sym != NULL; j++)
			{
				if (format[i -1] == f_list[j].sym[0])
				{
					val = f_list[j].f(arg_list);
					if (val == -1)
						return (-1);
					break;
				}
			}

			if (f_list[i].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					write(1, &format[i], 1);
					write(1, &format[i + 1], 1);
					done += 2;
				}
				else
					return (-1);
			}
		}
		else
		{
			write(1, &format[i], 1);
			done++;
		}
	}

	return (done);
}
