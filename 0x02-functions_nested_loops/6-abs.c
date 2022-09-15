#include "main.h"
/**
 * _abs - the function returns the absolute value of the parameter
 * from where it is been called
 *
 * Return: the return value is the result obtained by the data type
 * of the parameter
 *
 * @j: the datatype of the parameter is int
 *
 */
int _abs(int j)
{
	int result;

	if (j > '0')
	{
		result = j;
	} else if (j == '0')
	{
		result = 0;
	} else
	{
		if (j <= '0')
		{
			result = j * -1;
		}
	}
	return (result);
}
