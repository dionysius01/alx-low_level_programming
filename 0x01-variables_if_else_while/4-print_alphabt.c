#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	    if(alph == 'e'|| alph == 'q')
        {
            continue;
        }
		putchar(alph);
	}
		putchar('\n');
	return (0);
}
