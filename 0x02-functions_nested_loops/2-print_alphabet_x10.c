#include "main.h"
/**
 * print_alphabet_x10 print the alphabets in lowercase ten times
 * followed by a new line
 * return void
 */
void print_alphabet_x10(void)
{
	char alph = 'a';
	for(int i=0; i<10; i++)
	{
		while(alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
	}
}
