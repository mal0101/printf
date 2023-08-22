#include "main.h"
int printf_unsign(unsigned int num)
{
	int count = 0;
	if (num / 10 != 0)
	{
		count += printf_unsign(num / 10);
	}
	putch(num % 10 + '0');
	return (count + 1);
}
