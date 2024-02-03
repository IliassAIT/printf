#include "main.h"
/**
 * get_form - printf selector
 * @form: the data specifier entered.
 * Return: return pointer to the selected func.
 */
int (*get_form(char form))(va_list)
{
specifier select[] = {
	{'c', print_char},
	{'s', print_string},
	};
int flag = 0;
while (flag < 2)
{
	if (select[flag].spec == form)
		return (select[flag].f);
	flag++;
}
return (NULL);
}
