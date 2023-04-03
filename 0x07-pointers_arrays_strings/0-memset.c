#include "main.h"
/**
 * _memset - fill memory with a specific value
 * @s: starting address of memory that is to be filled
 * @b: This refers to the desired value
 * @n: This referes to the number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
