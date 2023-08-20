#include "main.h"
/**
 * _printf - does 'printf''s role
 * lista is a list of arguments
 * while loop, iterates characters through our format input
 * @format: character string
 * Return: if format == NULL, -1
 * else, printchar
 */
int _printf(const char *format, ...)
{
	int printchar = 0;
	va_list lista;

	if (format == NULL)
		return (-1);
	va_start(lista, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printchar++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				char c = va_arg(lista, int);

				write(1, &c, 1);
				printchar++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(lista, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
				{
					str_len++;
				}
				write(1, str, str_len);
				printchar += str_len;
			}
		}
		format++;
	}
	va_end(lista);
	return (printchar);
}
