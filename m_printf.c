#include "main.h"
/**
 * _printf - does printf's job
 * @format: character string
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int y, x = 0;

	va_list lista;

	va_start(lista, format);

	for (y = 0; format[y] != '\0'; y++)
	{
		if (format[y] != '%')
		{
			putch(format[y]);
		}
		else if (format[y + 1] == 's')
		{
			unsigned int str;

			str = strp(va_arg(lista, char*));
			y++;
			x += (str - 1);
		}
		else if (format[y + 1] == 'c')
		{
			putch(va_arg(lista, int));
			x++;
		}
		else if (format[y + 1] == '%')
		{
			putch('%');
		}
	}
	va_end(lista);
	return (x);
}
