#include <stdio.h>

/**
 * main - returns all possible diffrent combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = 0; tens <= 9; tens++)/*prints tens digits*/
	{
		for (ones = 0; ones <= 9; ones++)/*prints ones digits*/
		{
			if (!((ones == tens) || (tens > ones)))/*elminate rep*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
