#incllude "main.h"
/**
 * _pow_recursion - function that return the value
 * of x raised to the power of y
 * @x: parameter
 * @y: parameter
 * Return: itself
*/
int _pow_recursion(int x, int y);
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
return (x * _pow_recursion(x, y - 1));
}
