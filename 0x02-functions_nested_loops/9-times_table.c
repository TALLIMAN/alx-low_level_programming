#include "main.h"
/**
 * times_table - this function prints the time table of nine times
 */
void times_table(void)
{
	int number;
	int multiplier;
	int product;

	multiplier = 0;
	while (multiplier <= 9)
	{
		number = 0;
		while (number <= 9)
		{
			product = number * multiplier;

			if (product <= 9)
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			} else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (number <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}

			number++;
		}
		_putchar('\n');
		multiplier++;
	}
}
