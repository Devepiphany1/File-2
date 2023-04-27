#include "main.h"
#include <stdio.h>
/**
 * flip_bits - the number of bits to change are counted
 * gets from one numb to another
 * @n: 1st numb
 * @m: 2nd numb
 *
 * Return: numb of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}

