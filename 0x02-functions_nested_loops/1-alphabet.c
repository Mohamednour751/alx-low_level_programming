#include "main.h"
/**
 * print_alphabet -ulilizes on the -putchar function to print
 * the alphabet a - z
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
