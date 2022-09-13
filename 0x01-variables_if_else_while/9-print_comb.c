#include <stdio.h>
/**
 * main- the value returned by main is zero
 * Return: a zero value is returned
 */
int main(void)
{
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
