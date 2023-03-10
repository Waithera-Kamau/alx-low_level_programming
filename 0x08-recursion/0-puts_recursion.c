#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);/* print current character of the string*/
	_puts_recursion(s + 1); /* recursively call function with next character*/
}
