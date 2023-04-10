#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: This is an input value
 * @src: This is an input value
 * @n: This is an  input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
