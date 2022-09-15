#include "main.h"
/**
 * _abs - the function returns the absolute value of the parameter
 * from where it is been called
 *
 * Return: the return value is the result obtained by the data type
 * of the parameter
 *
 * @num: the datatype of the parameter is int
 *
 */
int _abs(int num)
{
	int result;

	if (num > '0')
	{
		result = num;
	} else if (num == '0')
	{
		result = 0;
	} else
	{
		if (num < '0')
		{
			result = num;
		}
	}
	return (result);
}
