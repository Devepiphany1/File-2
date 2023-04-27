#include "main.h"
#include <stdio.h>
/**
 * clear_bit - the value of a given bitis set to 0
 * @n: points to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);


	*n = (~(1UL << index) & *n);
	return (1);
}

