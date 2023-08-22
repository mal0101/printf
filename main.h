#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int putch(char c);
int _puts(char *c);
int printf_pointer(void *ptr);
int printf_hex(unsigned int num, char format);
int printf_number(int num);
int printf_unsign(unsigned int num);
int printf_oct(unsigned int num);
int printf_reversed(char *str);

#endif
