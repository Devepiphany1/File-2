#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of  decimal numb
 * @n: numb to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int current;

	for (j = 63; j >= 0;)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
