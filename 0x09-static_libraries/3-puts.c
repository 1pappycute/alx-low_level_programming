#include "main.h"
/**
 * _puts - puts function
 * @str: pointer to str
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
