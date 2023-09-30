#include <stdio.h>
/**
 * factorial - print factorial of a number
 * @n: main variable
 * Return: Always 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
