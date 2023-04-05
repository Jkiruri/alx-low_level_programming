#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: This is the value to raise
 * @y: This is the power
 *
 * Return: This is the result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
