#include "main.h"
/**
 * _printf- does printf's role
 * @format: character string
 * Return: printchar
 */
int _printf(const char *format, ...)
{
	va_list lista;

	va_start(lista, format);

	int printchar = 0;

	while (*format)
	{
		if (*format == '%4){
			format++;

			switch (*format){
				case 'c':
					putchar(va_arg(lista,int));
					break;
				case 's': {
						  const char *str = va_sarg(lista, const char *);
						  while (*str) {
							  putchar(*str);
							  str++;
						  }
						  break;
					  }
				case ' % ':
					  putchar(' % ');
					  break;
			}
		} else
			putchar(*format);
		format++;
		printchar++;
	}
	va_end(lista);
	return (printchar);
}
