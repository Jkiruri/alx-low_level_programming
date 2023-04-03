#include "main.h"
/**
*_strchr - Entry point
*@b: This is an input
*@d: This is an input
*Return: Always 0
*/
char *_strchr(char *b, char d)
{
	int i = 0;

	for (; b[i] >= '\0'; i++)
	{
		if (b[i] == d)
			return (&b[i]);
	}
	return (0);
}
