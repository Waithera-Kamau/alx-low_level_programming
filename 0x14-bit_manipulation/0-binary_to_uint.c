#include "main.h"

/**
 * _atoi - converts charcaters to integers
 *
 * @c: The character to convert
 *
 * Return: converted integer
 */

unsigned int _atoi(char c)
{
	return ((unsigned int ) c - '0');
}

/**
 * _strlen - gets the length of a string
 *
 * @str: The string input
 *
 * Return: String length
 */

unsigned int _strlen(const char *str)
{
	unsigned int index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned integer
 *
 * @b: string that contains 0 and 1 characters
 *
 * Return: the number converted or 0 if @b
 * contains a char that isn't 0/1
 * or when @b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0, base2 = 1, num = 0;

	/*if b is NULL return 0*/

	if (b == NULL)
		return (0);

	/*prints debug statements*/
#ifdef DEBUG
	printf("String is %s, and length is %u.\n", b, _strlen(b));
#endif
	/*iterate through the string*/
	for (index = _strlen(b) - 1; index >= 0; index--)
	{
		/*converts character to number*/
		num = _atoi(b[index]);

		/*print debug statements*/
#ifdef DEBUG
		printf("Number is %u, index is %i and base is %u.\n\n", num, index, base2);
#endif
		/*if number is not 0 or 1 return 0*/
		if (num != 0 && num != 1)
			return (0);

		/*enables debug to see it in action*/
		result += num * base2;
		base2 *= 2;

		/*print debug statements*/
#ifdef DEBUG
		printf("Result is %u.\n", result);
#endif
	}
	return (result);
}


