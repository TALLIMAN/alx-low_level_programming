#include "main.h"
/**
 * main- check the code...the value should return zero
 *
 * Return: return value of zero
 *
 * print_alphabet(void)- check the code...no returned value
 *
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void) /*the function for defining the loop for alphabets*/
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
