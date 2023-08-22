#include "main.h"
int printf_oct(unsigned int num)
{
	int count = 0;
	if (num / 8 != 0)
	{
		count += printf_oct(num / 8);
	}
	putch(num % 8 + '0');
	return (count + 1);
}
