#include "main.h"
/**
 * jack_bauer- a value is returned in putchar
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	hours = '0';
	while (hours <= 23)
	{
		minutes = '0';
		while (minutes <= 59)
		{
			putchar((hours / 10) + '0');
			putchar((hours % 10) + '0');
			putchar(':');
			putchar((minutes / 10) + '0');
			putchar((minutes % 10) + '0');
			minutes++;
		}
		hours++;
	}
}
