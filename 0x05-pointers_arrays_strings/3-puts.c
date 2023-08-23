#include "main.h"
/**
 * _puts -prints
 * @str: string parameter to print
 * Return: nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
