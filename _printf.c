#include "main.h"
/**
 * _printf - printf function
 * @format: string meaning format specifier
 * Return: return number of printed chars
 */
int _printf(const char *format, ...)
{
va_list list;
int i = 0;
va_start(list, format);
for (i = 0; format[i]; i++)
{
if (format[i] == '%')
	{
	get_form(format[i + 1])(list);
	i = i + 2;
	}
_putchar(format[i]);
}
va_end(list);
return (i);
}
