#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int h1, h2, min1, min2;

	for (h1 = '0'; h1 <= '2'; h1++)
	{
		for (h2 = '0'; h2 <= '9'; h2++)
		{
			for (min1 = '0'; min1 < '6'; min1++)
			{
				for (min2 = '0'; min2 <= '9'; min2++)
				{
					_putchar(hr1);
					_putchar(hr2);
					_putchar(':');
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');
				}
			}
			if (hr2 == '3')
			{
				if (hr1 == '2')
					return;
			}
		}
	}

}
