#include "main.h"

/**
 *print_rev - this function prints the string in reverse
 *
 *@s : the parameter of the function
 */

void print_rev(char *s)
{
	int len;
	char *point;
	int i;

	len = _strlen(s);
	point = &s[len - 1];

	for (i = 999; *point; i--)
	{
		putchar(point);
		*point--;
	}
	putchar('\n');
}
