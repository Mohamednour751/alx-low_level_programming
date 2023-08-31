#include "main.h"
/**
 * _sqrt_recursion - function that return the natural
 * square root of a number
 * @n: parameter
 * @val: parameter
 * Return: itself
*/
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
