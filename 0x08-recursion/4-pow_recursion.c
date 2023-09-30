#include <stdio.h>

/**
 * _pow_recursion - functions that returns the value of x^y
 * @x: fitst variable
 * @y: second variable
 * Return: Always(0)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
