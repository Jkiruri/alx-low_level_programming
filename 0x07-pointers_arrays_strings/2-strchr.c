#include "main.h"
/**
 * _strchr - Entry point
 * @s: This is an  input
 * @c: This is an input
 * Return: Always
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
