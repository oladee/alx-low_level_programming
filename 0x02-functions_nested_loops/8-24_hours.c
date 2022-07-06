#include "main.h"
/**
 * jack_bauer - prints every minute of the
 *  day of Jack Bauer, starting from 00:00 to 23:59.
 **/
void jack_bauer(void)
{
	int hr, minutes;

	for(hr = 0; hr < 24; hr++)
	{
		for(minute = 0; minute < 60; minute++)
		{
			_putchar((hr/10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((minute / 10 ) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
