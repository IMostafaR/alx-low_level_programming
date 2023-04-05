#include "main.h"

/*
 * _puts_recursion - print a string, followed by a new line
 * return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_put_recursion;
}
