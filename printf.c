#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - print formatted input
 * @format: string
 * Return: length of string
*/
int _printf(const char *format, ...)
{
	int len;
	va_list mylist;

	if (format == NULL)
		return (-1);
	va_start(mylist, format);
	len = handle_conversion_specifier(format, mylist);
	va_end(mylist);
	return (len);
} /* end function */
