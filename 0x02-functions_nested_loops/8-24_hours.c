#include "main.h"
/**
 * jack_bauer - count down 24hours
 * Return: void.
 */
void jack_bauer(void)
{
	int minute, hour;
	for (hour = 0; hour <= 23; hour++)
	{
	for (minute = 0; minute <= 59; minute++)
	{
	_putchar('0' + (hour / 10));
	_putchar('0' + (hour % 10));
	_putchar(':');
	_putchar('0' + (minute / 10));
	_putchar('0' + (minute % 10));
	_putchar('\n');
	}
	}
}
