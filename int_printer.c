#include "main.h"
int print_number(int num, int base);
/**
 * print_int - Prints an integer
 * @list: A va_list containing the integer to print
 * Return: The number of characters printed
 */
int print_int(va_list list)
{
int num = va_arg(list, int);
if (num < 0)
{
	_putchar('-');
	num = -num;
}
return (print_number(num, 10));
}
/**
 * print_number - Prints a number with a given base recursively
 * @num: The number to print
 * @base: The base for conversion
 * Return: The number of characters printed
 */
int print_number(int num, int base)
{
int printed_chars = 0;
if (num > 0)
{
	printed_chars += print_number(num / base, base);
	_putchar(num % base + '0');
}
return (printed_chars);
}
