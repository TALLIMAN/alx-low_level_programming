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
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned int)sizeof(lu));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(lld));
	printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(f);
	return (0);
}
