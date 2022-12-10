#include <stdio.h>
/**
 * main - print alphabet in upper and lower case
 * Return: Always 0
 */
int main(void)
{	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	putchar(ab);
	for (ab = 'A'; ab <= 'Z'; ab++)
	putchar(ab);

	putchar('\n');
	return (0);
}
