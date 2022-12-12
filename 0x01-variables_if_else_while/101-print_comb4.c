#include <stdio.h>

/**
 * main - prints all possible different combinations of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones;
	int tens;
	int hundreds;

	for (hundreds = 0; hundreds <= '0'; hundreds++)
	{
		for (tens = '0'; tens <= '0'; tens++)
		{
			for (ones = '0'; ones <= '0'; ones++)
			{
				if(!((ones == tens) || (tens == hundreds) ||
			        	(tens > hundreds) || (hundreds > tens)))                                {
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if(!(ones == '9' && hundreds == '7' &&
								tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}