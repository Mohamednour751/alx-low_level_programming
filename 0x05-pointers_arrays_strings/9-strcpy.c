#include "main.h"
/**
 * *_strcpy - copies the string
 * @dest: char
 * @src: char
 * Return: pointer
*/
char *_strcpy(char *dest, char *src)
{
	int o = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
