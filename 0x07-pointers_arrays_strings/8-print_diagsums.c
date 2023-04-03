#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: This is an input
 * @size: This is an input
 * Return: Always 0)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, d;

	s1 = 0;
	s2 = 0;

	for (d = 0; d < size; d++)
	{
		s1 = s1 + a[d * size + d];
	}

	for (d = size - 1; d >= 0; d--)
	{
		s2 += a[d * size + (size - d - 1)];
	}

	printf("%d, %d\n", s1, s2);
}
