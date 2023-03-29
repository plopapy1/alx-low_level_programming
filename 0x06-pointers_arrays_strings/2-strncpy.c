#include "main.h"

/**
  * _strncpy - string copy
  * @dest: destination code
  * @src: source code
  * @n: number of times
  * Return: return dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
