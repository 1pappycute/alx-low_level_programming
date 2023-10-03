#include <stdio.h>
#include "main.h"
/**
 * _strlen - function strlen
 * @s: var 1
 * Return: s
*/
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
