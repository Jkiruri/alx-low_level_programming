#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - This allocates memory using malloc
 * @b: This refers to number of bytes to allocate
 * Return: This will be a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
