#include <stdio.h>
#include "main.h"
/**
 * main- check the code...the value should return zero
 *
 * Return: return value of zero
 *
 * print_alphabet- check the code...no returned value
 *
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
