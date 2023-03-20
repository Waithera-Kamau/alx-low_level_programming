#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * passed into it
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the argumebts passed
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while  (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}
