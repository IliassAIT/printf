#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string with optional format specifiers
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
va_list list;
int i = 0, printed_chars = 0;
int ret;
va_start(list, format);
for (i = 0; format[i]; i++)
{
	if (format[i] == '%')
	{
		i++;
		if (format[i])
		{
			ret = get_form(format[i])(list);
			if (ret != -1)
			{
				printed_chars += ret;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				printed_chars += 2;
			}
		}
		else
		{
			break;
		}
	}
	else
	{
		_putchar(format[i]);
		printed_chars++;
	}
}
va_end(list);
return (printed_chars);
}
