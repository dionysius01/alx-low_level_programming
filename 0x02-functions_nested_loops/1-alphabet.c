#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alpha(void)
{
	char alph;
	alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}

	_putchar('\n');
}
