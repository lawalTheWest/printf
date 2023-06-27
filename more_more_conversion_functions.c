#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * stringLength - get string lenght
 * @str: va_list object
 * Return: (lenght)
*/
int stringLength(const char* str)
{
	int length = 0;

	while (str[length] != '\0')
		length++; /* end while */
	return length;
} /* end function */

/**
 * writeString - printing the string
 * @str: va_list object
 *
*/
void writeString(const char* str)
{
	int length = stringLength(str);

	write(1, str, length);
} /* end function */

/**
 * writeChar - print character
 * @c: va_list object
*/
void writeChar(char c)
{
	write(1, &c, 1);
} /* end function */

/**
 * writeHex - print hexadecimal
 * @value: parameters
*/
void writeHex(unsigned long value)
{
	const char hexDigits[] = "0123456789ABCDEF";
	char buffer[16];
	int index = 0;

	if (value == 0)
	{
		writeChar('0');
		return;
	} /* end if */

	while (value > 0 && index < 16)
	{
		int digit = value % 16;
		buffer[index++] = hexDigits[digit];
		value /= 16;
	} /* end while */

	while (index > 0)
		writeChar(buffer[--index]);
	/* end while */
} /* end function */

/**
 * handle_memory_address - handles the 'p' specifier
 * @ptr: pointer
*/
void handle_memory_address(void* ptr)
{
	unsigned long address = (unsigned long)ptr;

	writeString("0x");
	writeHex(address);
} /* end function */
