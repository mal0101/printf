#include "main.h"
int printf_number(int num)
{
	int count = 0;
	if (num < 0)
	{
		putch('-');
		num = -num;
		count++;
	}
	if (num / 10 != 0)
	{
		count += printf_number(num / 10);
	}
	putch(num % 10 + '0');
	return (count + 1);
}
