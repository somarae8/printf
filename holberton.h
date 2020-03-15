#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct op_func
{
	char *op;
	int (*f)(va_list);
} op_;
int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int f_string(va_list);
int f_char(va_list);
int select_(const char *format, va_list list, op_ options[]);
int _strlen(char *s);
int len_num(unsigned int n, unsigned int base);
char *rev_string(char *s);
int f_bin(va_list list);
#endif