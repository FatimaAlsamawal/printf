#include "main.h"


/**
 * write_c - writes the character c to stdout
 * @c: the character  to be print
 *
 * Return: On success 1
 */
int write_c(char c)
{
	return (write(1, &c, 1));
}
