#include <stdio.h>
/**
 * _strlen_recursion - function that prints the length of a string
 * @s: string given
 * Return: Always 0
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
