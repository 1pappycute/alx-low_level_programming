#include <stdio.h>
/**
 * _sqrt_recursion - functions that return natural root of n
 * @n: first variable
 * Return: Always 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_sqrt(0, n));
}
/**
 * _sqrt - square root function
 * @n: given number
 * @x: square of n
 * Return: Always 0
*/
int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
