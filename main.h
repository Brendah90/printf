#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char s);
int _printf(const char *format, ...);
int (*get_func(const char specifier))(va_list);

int print_string(va_list args);
int print_char(va_list types, char buffer);
int print_int(va_list args);

#endif /* MAIN_H */
