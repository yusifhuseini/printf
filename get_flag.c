#include "main.h"

/**
 * get_flag - _printf flags str format
 * @s: char specifier
 * @f: pointer to  struct flags
 *
 * Return: 1 (successful) or 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
