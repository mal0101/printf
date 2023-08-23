#include "main.h"
/**
 * strp - prints string of char
 * @c: array to character string
 * Return: list
 */
int strp(char *c)
{
	int c7sab = 0;

	if (c)
	{
		for (c7sab = 0; c[c7sab] != '\0'; c7sab++)
		{
			putch(c[c7sab]);
		}
	}
	return (c7sab);
}
