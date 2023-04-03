#include "main.h"
/**
 * _strspn - Entry point
 * @b: This is an input
 * @take: This is an input
 * Return: Always 0
 */
unsigned int _strspn(char *b, char *take)
{
	unsigned int n = 0;
	int i;

	while (*b)
	{
		for (r = 0; take[i]; i++)
		{
			if (*b == take[i])
			{
				n++;
				break;
			}
			else if (take[i + 1] == '\0')
				return (n);
		}
		b++;
	}
	return (n);
}
