#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct data - struct of matching format with func
 * @spec: char that defines the format specifier
 * @f: the function to be selected
 */
typedef struct data
{
	char spec;
	int (*f)();
} specifier;
/* string library */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_form(char form))(va_list);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_number(int num, int base);
#endif
