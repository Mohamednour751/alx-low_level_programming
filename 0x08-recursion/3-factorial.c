#include "main.h"
/**
 * factorial - returns the factorial
 * @n: parameter
 * Return: itself
*/
int factorial(int n)
{
	int n;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}