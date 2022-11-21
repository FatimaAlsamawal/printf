<<<<<<< HEAD
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
=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
>>>>>>> 570ce5b18972e5e2f789679d36fc0ff97c74e689
}
