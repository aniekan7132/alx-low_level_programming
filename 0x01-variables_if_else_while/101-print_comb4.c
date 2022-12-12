#include <stdio.h>

/**
 * main - returns all possible combinations of 3 different digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; hundreds <= '9'; hundreds++)
		{
			for (ones = '0'; hundreds <= '9'; hundreds++)
			{
				if (!((ones == tens) || (tens == hundreds) || (tens > ones) || (hundreds > tens)))/*eliminate repetition*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' && tens == '8')) /*adds commas and space*/
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
