#include <stdio.h>
#include <unistd.h>

/**
 * _strlen - get the length of a string
 * @s: given string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
} /* end of function */

/**
 * _itoa - convert integer to string
 * @num: number to conver
 * Return: string
 */
int _itoa(int num)
{
	int length = 0;
	int is_negative = 0;
	char buffer[1024];
	int i, j;
	char hold;

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	while (num > 0)
	{
                buffer[length++] = '0' + (num % 10);
                num /= 10;
	} /* end while */
	/*
	 * do {
		buffer[length++] = '0' + (num % 10);
		num /= 10;
	} while (num > 0);
	*/
	if (is_negative == 1)
	{
		buffer[length++] = '-';
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		hold = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = hold;
	}
	write(1, buffer, length);
	return (length);
} /* End of function */

/**
 * _btoa - convert decimal to binary and write
 * @num: given decimal
 * Return: (void) write binary number
 */
int _btoa(unsigned int num)
{
	int length = 0;
	char buffer[1024];
	int i, j;
	char hold;

	do {
		buffer[length++] = '0' + (num % 2);
		num /= 2;
	} while (num > 0);
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		hold = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = hold;
	}
	write(1, buffer, length);
	return (length);
} /* End of function */

/**
 * _itou - convert int to unsigned and write
 * @num: given integer
 * Return: (void)
 */
int _itou(unsigned int num)
{
	int length = 0;
	char buffer[1024];
	int i, j;
	char hold;

	do {
		buffer[length++] = '0' + (num % 10);
		num /= 10;
	} while (num > 0);
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		hold = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = hold;
	}
	write(1, buffer, length);
	return (length);
} /* End of function */

/**
 * _itoo -convert to octal and write
 * @num: given integer
 * Return: (void)
 */
int _itoo(unsigned int num)
{
	int length = 0;
	char buffer[1024];
	int i, j;
	char hold;

	do {
		buffer[length++] = '0' + (num % 8);
		num /= 8;
	} while (num > 0);
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		hold = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = hold;
	}
	write(1, buffer, length);
	return (length);
} /* End of function */
