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
				case 'd':
				case 'i':
					x += printf_number(va_arg(lista, int));
					break;
				case 'u':
					x += printf_unsign(va_arg(lista, unsigned int));
					break;
				case 'o':
					x += printf_oct(va_arg(lista, void*));
					break;
				case 'x':
				case 'X':
					x += printf_hex(va_arg(lista, unsigned int), format[y]);
					break;
				case 'p':
					x += printf_pointer(va_arg(lista, void*));
					break;
				case 'r':
					x += printf_reversed(va_arg(lista, char*));
					break;
				default:
					putch('%');
					putch(format[y]);
					break;
			}
		}
		x++;
	}
	va_end(lista);
	return (x);
}
