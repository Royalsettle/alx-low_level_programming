#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 *
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char i;
	for (i = 'a' ; i <= z ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
