#include "main.h"
#include <stdio.h>

/**
 * _memset - writes to memory
 * @s: pointer to memory
 * @b: thing to write
 * @n: bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
