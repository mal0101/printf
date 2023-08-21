#include "main.h"
/**
 * putch - print char
 * @c: chat input
 * Return: 1
 */
int putch(char c)
{
	return (write(1, &c, 1));
}
