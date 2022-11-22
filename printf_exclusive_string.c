#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */
int printf_exclusive_string(va_list val)
{
	char *str;
	int i, len = 0;
	int cast;

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = str[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_aux(cast);
		}
		else
		{	
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
