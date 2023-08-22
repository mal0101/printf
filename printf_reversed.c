#include "main.h"
int printf_reversed(char *str)
{
	int count = 0;
	if (*str)
	{
		count += printf_reversed(str + 1);
		putch(*str);
		count++;
	}
	return (count);
}
