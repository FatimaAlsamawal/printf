#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes th character c to stdout
 * @c: the character to print
 *
 * Return: on Succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 11));
}
