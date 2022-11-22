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
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_octal(va_list list);
int _putchar(char c);
int print_dec(va_list d);
int print_int(va_list i);
int print_bin(va_list b);
int print_p(va_list p);
int print_unsigned(va_list u);
int print_rot13(va_list R);
int print_rev(va_list r);
int print_hex(va_list list);
int print_heX(va_list list);

/**
 * helper functions
 */
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
int hex_check(int num, char x);

#endif
