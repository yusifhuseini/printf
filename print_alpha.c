#include "main.h"

/**
 * print_string - loop string and prints
 * @l: _printf va_list arg
 * @f: struct pointer
 * Return: char value
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - char prints
 * @l: _printf va_list arg
 * @f: struct pointer
 * Return: char value
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
