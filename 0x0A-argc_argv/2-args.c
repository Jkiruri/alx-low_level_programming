#include <stdio.h>
#include "main.h"
/**
 * main - This will print all arguments it receives
 * @argc: This is the number of arguments
 * @argv: This is an array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
