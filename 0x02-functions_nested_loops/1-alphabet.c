#include <stdio.h>
#include "main.h"

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int letter;
	letter = 'a';

	while(letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return;
}
