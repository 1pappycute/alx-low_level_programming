#include <stdio.h>
#include "main.h"
/**
 * _memset - function memset
 * @s: char 1
 * @b: char b
 * @n: unsigned int n
 * Return: b
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
