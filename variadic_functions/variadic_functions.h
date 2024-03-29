#ifndef FUNC_VARIAD
#define FUNC_VARIAD
#include <stdarg.h>
int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_character(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif
