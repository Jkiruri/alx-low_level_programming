#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: This refers to where the memory is stored
 *@src: This refers to where the memory is copied
 *@n: This refers to the number of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int i = n;

	for (; b < i; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
