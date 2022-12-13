#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
int main(void)
{
	void print_alphabet(void)
	{
		char ch;

		ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}

		putchar('\n');
	}
}
