#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;
	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Bing Endian\n");
	}
	return (0);
}
