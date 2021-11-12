#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
int get_func(const char s, va_list i);
int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int n);
int print_char(va_list arg);
int print_string(char *ch);
int print_percent(va_list arg);
unsigned int to_binary(unsigned int value);
int print_unsint(unsigned int n);
#endif
