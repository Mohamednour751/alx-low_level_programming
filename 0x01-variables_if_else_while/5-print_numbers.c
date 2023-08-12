#include <stdio.h>
/*
 * main - main function
 * Description: a c progam that prints with printf function
 * Return: Always 0
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
