#include "main.h"
#include <string.h>

/**
 * _strcpy - copits a string pointed to by src to the buffer poited
 * to by dest
 * @dest: the distination buffer
 * @src: the source pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
