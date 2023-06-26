#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * handle_binary_specifier - convert to binary
 * @args: va_list object
 * Return: ()
*/
int handle_binary_specifier(va_list args)
{
	unsigned int mybinary;
	int len;

	mybinary = va_arg(args, int);
	len = _btoa(mybinary);
	return (len);
} /* end function */

/**
 * handle_unsigned_specifier - check for unsigned int.
 * @args: va_list object
 * Return: ()
*/
int handle_unsigned_specifier(va_list args)
{
	unsigned int myunsignedint;
	int len;

	myunsignedint = va_arg(args, int);
	len = _itou(myunsignedint);
	return (len);
} /* end function */

/**
 * handle_octal_specifier - check's for Octal
 * @args: va_list object
 * Return: ()
*/
int handle_octal_specifier(va_list args)
{
	unsigned int myoctal;
	int len;

	myoctal = va_arg(args, int);
	len = _itoo(myoctal);
	return (len);
} /* end of function */

/**
 * handle_hex_specifier - check's for hexadecimal values
 * @args: va_list object
 * Return: ()
*/
int handle_hex_specifier(va_list args)
{
	unsigned int myhex;
	int len;

	myhex = va_arg(args, int);
	len = _itox(myhex);
	return (len);
} /* end of function */

/**
 * handle_Hex_Specifier - checks for Hex
 * @args: va_list object
 * Return: ()
*/
int handle_Hex_Specifier(va_list args)
{
	unsigned int myHex;
	int len;

	myHex = va_arg(args, int);
	len = _itoX(myHex);
	return (len);
} /* End of function */
