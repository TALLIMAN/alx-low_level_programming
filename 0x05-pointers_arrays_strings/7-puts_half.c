#include "main.h"
/**
 * puts_half - this function prints the half of the string
 *
 * @str: the parameter that contains the value of the string
 *
 */

void puts_half(char *str)
{
	int len;
	int rem;
	char *n;

	len = strlen(str);
	rem = len - 1;

	if (rem % 2 == 0)
	{
		n = &str[(rem / 2) + 1];/* shifting position of pointer to the middle */
	} else
	{
		n = &str[(rem / 2)];
	}
	while (*n)
	{
		putchar(*n++);
	}
}
