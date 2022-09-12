#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * if : the if statement prints out the result of the program
 * main- the result should return success
 * Return: the return has zero value
 * printf: a string of values is printed
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
