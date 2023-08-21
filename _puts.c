#include "main.h"
/**
 * _puts - print str
 * @c: str
 * Return: numbr of bytes
 * c7sab is just like count
 */
int _puts(char *c)
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
