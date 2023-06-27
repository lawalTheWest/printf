#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * handle_conversion_specifier - check which specifier is used
 * @format: format string
 * @args: va_list object
 * Return: (len)
*/
int handle_conversion_specifier(const char *format, va_list args)
{
	int i = 0;
	int len = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				len += handle_char_specifier(args);
			else if (format[i + 1] == 's')
				len += handle_string_specifier(args);
			else if (format[i + 1] == '%')
				len += handle_percent_specifier();
			else
				len += handle_other_specifiers(format[i + 1], args);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
		i++;
	}
	return (len);
} /* end function*/
/**
 * handle_other_specifiers - handles other specifiers
 * @args: va_list object
 * @specifier: arguments
 * Return: (format specifiers)
 *
 */
int handle_other_specifiers(char specifier, va_list args)
{
	if (specifier == 'd')
		return (handle_decimal_specifier(args));
	else if (specifier == 'i')
		return (handle_integer_specifier(args));
	else if (specifier == 'b')
		return (handle_binary_specifier(args));
	else if (specifier == 'u')
		return (handle_unsigned_specifier(args));
	else if (specifier == 'o')
		return (handle_octal_specifier(args));
	else if (specifier == 'x')
		return ((handle_hex_specifier(args)));
	else if (specifier == 'X')
		return (handle_Hex_Specifier(args));
	else if (specifier == 'p') /* handles address */
	{
		void *ptr = va_arg(args, void*);

		handle_memory_address(ptr);
	} /* end else */
	else
		return (0);
	return (0);
} /* end function */
