#include <stdio.h>
/**
 * main - Numbers from 1-9
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}

