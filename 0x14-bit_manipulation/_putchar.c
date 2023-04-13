#include <unistd.h>

/**
 * _putchar - writes characters to stdout
 * @c: The character to print
 *
 * Return: On success 1, otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
