#include <stdio.h>
#include <unistd.h>
/**
 * _itox - convert integer to hex and write
 * @num: given unsigned integer
 * Return: (void)
 */
int _itox(unsigned int num)
{
	int length = 0;
	char buffer[1024];
	int i, j;
	char hold;
	char hexdigits[] = "0123456789abcdef";

	do {
		buffer[length++] = hexdigits[num % 16];
		num /= 16;
	} while (num > 0);
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		hold = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = hold;
	}
	write(1, buffer, length);
	return (length);
}
/**
 * _itoX - conver to Hex and write
 * @num: given unsigned integer
 * Return: (void)
 */
int _itoX(unsigned int num)
{
	int length = 0;
	char buffer[1024];
	int i, j;
	char hold;
	char hexdigits[] = "0123456789ABCDEF";

	do {
		buffer[length++] = hexdigits[num % 16];
		num /= 16;
	} while (num > 0);
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		hold = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = hold;
	}
	write(1, buffer, length);
	return (length);
}
