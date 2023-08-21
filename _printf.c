#include "main.h"
/**
 * _printf - does printf's job
 * @format: character string
 * Return: numbr of bytes
 * x is count
 * for the specifier c, char becomes int
 * that's why we used int in va_arg
 * strcount is string counting
 */

int _printf(const char *format, ...)
{
	unsigned int y, strcount, x = 0;

	va_list lista;

	if (!format || (format[0] == '%' && format[1]))
		return (-1);

	va_start(lista, format);

	for (y = 0; format[y] != '\0'; y++)
	{
		if (format[y] != '%')
		{
			putch(format[y]);
		}
		else
		{
			y++;
			switch (format[y])
			{
				case 'c':
					putch(va_arg(lista, int));
					break;
				case 's':
					strcount = _puts(va_arg(lista, char*));
					x += (strcount - 1);
					break;
				case '%':
					putch('%');
					break;
			}
		}
		x++;
	}
	va_end(lista);
	return (x);
}
