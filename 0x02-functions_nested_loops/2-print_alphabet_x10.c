#include "main.h"
/**
 * print_alphabet_x10 print the alphabets in lowercase ten times
 * followed by a new line
 * return void
 */
void print_alphabet_x10(void)
{
	char alph = 'a';
	int i=0; 
	while(i<10)
	{
		while(alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
