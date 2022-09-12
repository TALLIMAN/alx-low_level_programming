#include <stdio.h>
/**
 * main- no value is returned
 * Return: the return value is 0
 * printf: shows multiple data types and their meaning
 */
int main(void)
{
	int i;
	char c;
	long int lu;
	long long int lld;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lu));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long long int)sizeof(lld));

	return (0);
}
