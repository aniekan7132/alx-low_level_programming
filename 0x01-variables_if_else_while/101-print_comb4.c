#include <stdio.h>

/**
 * main - returns all possible different combinations of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;
	int j;

	for (i = 48; i < 58; i++)
	{
		if (n > 1)
		{
			for (j = 48; j < 58; j++)
			{
				if (j > n)
				{
					putchar(i);
					putchar(n);
					putchar(j);
					if (i = 55 && n == 56 && j == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
