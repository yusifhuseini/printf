#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - custom implementation of printf
 *
 * @format: string containing format specifiers
 * @...: additional arguments to be printed
 *
 * Return: number of characters printed
 */
void _printf(char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			int width = 0;
			while (*format >= '0' && *format <= '9')
			{
				width = width * 10 + (*format - '0');
				format++;
			}
			if (*format == 's')
			{
				char *s = va_arg(args, char *);
				for (int i = 0; i < width; i++)
				{
					putchar(s[i]);
				}
			}
			else if (*format == 'd')
			{
				int d = va_arg(args, int);
				printf("%d", d);
			}
			else
			{
				putchar(*format);
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}

	va_end(args);
}

/**
 * main - entry point of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char *s = "Hello, world!";
	_printf("String with precision: [%3s]\n", s);
	return (0);
}
