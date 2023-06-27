#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * handle_char_specifier - check for char
 * @args: va_list object
 * Return: length
*/
int handle_char_specifier(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	write(1, &ch, 1);
	return (1);
} /* End function */

/**
 * handle_string_specifier - check for string
 * @args: va_list object
 * Return: length
*/
int handle_string_specifier(va_list args)
{
	char *mystring;
	int len;

	if (args != NULL)
	{
		mystring = va_arg(args, char *);
		len = _strlen(mystring);
		write(1, mystring, len);
		return (len);
	} /* end if */
	else
	{
		return (-1);
	} /* end else */
} /* End function */

/**
 * handle_percent_specifier - check for percent
 *
 * Return: length
*/
int handle_percent_specifier(void)
{
	char percent = '%';

	write(1, &percent, 1);
	return (1);
} /* end function */

/**
 * handle_decimal_specifier - check for decimal
 * @args: va_list object
 * Return: length
*/
int handle_decimal_specifier(va_list args)
{
	int myint;
	int len;

	myint = va_arg(args, int);
	len = _itoa(myint);
	return (len);
} /* end function */

/**
 * handle_integer_specifier - check for integer
 * @args: va_list object
 * Return: length
*/
int handle_integer_specifier(va_list args)
{
	int myint;
	int len;

	myint = va_arg(args, int);
	len = _itoa(myint);
	return (len);
} /* end function */
