#include "main.h"
/**
 * print_string - function that prints a string
 * @list: linked list of args.
 * Return: (0) if a string is printed succesfully
 *	(1) if the string is NULL.
 */
int print_string(va_list list)
{
char *s = va_arg(list, char *);
size_t length;
unsigned int i;
if (s)
	length = _strlen(s);
else
{
	s = "(null)";
	length = 6;
}
for (i = 0; i < length; i++)
{
_putchar(s[i]);
}
return (length);
}
