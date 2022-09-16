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
	if (num <= 0 || num >= 0)
	{
		num = num % 10;
	}
	return (num);
}
