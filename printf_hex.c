#include "main.h"
int printf_hex(unsigned int num, char format)
{
	int count = 0;
	char hexDigits[] = "0123456789abcdef";
	if (num / 16 != 0)
	{
		count += printf_hex(num / 16, format);
	}
	putch(hexDigits[num % 16]);
	return (count + 1);
}
