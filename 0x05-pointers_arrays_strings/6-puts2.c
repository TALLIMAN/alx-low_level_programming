#include "main.h"
/**
 * puts2 - the function prints the first character followed by even numbers
 *
 * @str: this parameter points at the first element in the array
 */

void puts2(char *str)
{
	_putchar(str[0]);
	while (*str)
	{
		if (*str++ % 2 != 1)
		{
			continue;
		}
		_putchar(*str++);
	}
}
