#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: This is an input
 * @accept: This is an input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; k++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
