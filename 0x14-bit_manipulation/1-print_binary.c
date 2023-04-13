#include "main.h"

/**
 * _length - find the length of @n
 *
 * @N: value to find its length
 *
 * Return: length
 */

int _length(unsigned long int n)
{
	int length = 0;
	while (n > 0)
	{
		length++;
		n >>= 1; /*shifts n to the right by 1 position*/
	}
	length--;
	return (length);
}

/**
 * print_binary - a fucntion that converts a decimal no. to binary
 *
 * @n: decimal no. to convert
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = _length(n);

	/* create mask based on length of number*/
	if (length > 0)
		mask <<= length; /*shift mask to the left by length*/
	while (mask > 0)
	{
		/*if n & mask == 1 print 1*/
		if (n & mask)
			_putchar('1');
		/*else if n * mask == 0 print 0 */
		else
			_putchar('0');
		mask >>= 1; /*shift mask to the right by 1*/
	}
}

