#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char to stdout
 * @c: print char
 * Return: always 1 (success)
 * Description: _putchar uses a local buffer of 1024
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints str to stdout
 * @str: str pointer
 * Return: char value
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
