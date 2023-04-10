#include <stdio.h>
#include "main.h"
/**
 * main - This will print the number of arguments passed to the program
 * @argc: This is the number of arguments
 * @argv: This is an array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
