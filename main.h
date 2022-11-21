#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - struct convert
 *
 * @sym: operator
 * @f: funcation
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert convert_to;

int parser(const char *format, convert_to f_list[], va_list arg_list);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_per(va_list);
<<<<<<< HEAD
int _putchar(char c);
=======
int write_c(char c);
int print_dec(va_list d);
int print_int(va_list i);
>>>>>>> 570ce5b18972e5e2f789679d36fc0ff97c74e689

#endif
