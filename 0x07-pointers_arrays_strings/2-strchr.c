#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character
 * @s: the string
 * @c: the character
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (*(s + a) == c)
			return (s + a);
	}
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}
