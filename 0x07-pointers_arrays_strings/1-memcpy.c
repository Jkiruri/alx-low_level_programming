#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *mem: This refers to the memory where it is stored
 *cop: This refers memory where is copied
 *b: This refers to the number of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *mem, char *cop, unsigned int b)
{
	int r = 0;
	int i = b;

	for (; r < i; r++)
	{
		mem[r] = cop[r];
		b--;
	}
	return (mem);
}
