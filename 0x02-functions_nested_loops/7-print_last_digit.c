#include "main.h"
/**
 * print_last_digit - the function prints the last number with modulo ten
 *
 * Return: the return value is the result of the modulo
 *
 * @num: the parameter of the function and with the datatype
 *
 */

int print_last_digit(int num)
{
	int result;

	if (num <= '0' || num >= '0')
	{
		result = num % 10;
	}
	return (result);
}
