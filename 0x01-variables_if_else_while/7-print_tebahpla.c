#include <stdio.h>
/**
 * main - print lowercase ltter in reverse
 * Return: Always 0
 */
int main(void)
{	char lr;

	for (lr = 'z'; lr >= 'a'; lr++)
		putchar(lr);
	putchar('\n');
	return (0);
}
