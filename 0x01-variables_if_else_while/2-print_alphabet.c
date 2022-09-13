#include <stdio.h>
/**
 * main- a value is returned in putchar
 * Return: the return value is 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	return (0);
}
