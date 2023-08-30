#include "main.h"
/**
 * _puts_recursion - for task 0
 * @s: parameter
 * Return: itself
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1)
	}
}
