#include "main.h"
int printf_pointer(void *ptr)
{
	int count = 0;
	putch('0');
	putch('x');
	count += 2;
	printf_pointer((unsigned int)ptr, 'x');
	count += 8;
	return (count);
}
