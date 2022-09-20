#include <stdio.h>
/**
 * main- a value is returned in putchar
 * Return: the return value is 0
 */
int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	while (i < 0)
	{
		putchar(i);
	}
	printf("infinte loop avoided! \\o/\n");

	return (0);
}
