#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function that return 1
 * @n: parameter
 * @othrn: parameter
 * Return: 0 of 1
*/

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check all number
 * @n: prameter
 * @othrn: parameter
 * Return: n
*/
int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
