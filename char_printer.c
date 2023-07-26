#include "main.h"
/**
 * print_char - function that prints a char
 * @list: character to be printed
 * Return: (1) if succeded and -1 in error case.
 */
int print_char(va_list list)
{
_putchar(va_arg(list, int));
return (0);
}
