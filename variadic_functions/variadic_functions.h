#ifndef variadic_functions
#define variadic_functions
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct format_types
{
char *id;
void (*f)(char *separator, va_list args);
} f_t;

void print_char(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_f(char *separator, va_list args);
void print_str(char *separator, va_list args);

#endif
