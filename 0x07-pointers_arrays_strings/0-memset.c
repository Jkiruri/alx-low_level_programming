#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @q: this will be the starting address of memory
 * @c: this is the value that is desired
 * @d: this refers to the amount if bytes
 * Return: changed array with new value for n bytes
 */
char *_memset(char *q, char c, unsigned int d)
{
	int i = 0;

	for (; d > 0; i++)
	{
		q[i] = c;
		d--;
	}
	return (q);
}
