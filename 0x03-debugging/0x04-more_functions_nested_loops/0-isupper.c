#include "main.h"
/**
 * main - checks if a code is uppercase or lowercase
 * returns 1 if c is uppercase
 * returns 0 otherwise
 */

int _isupper(int c)
{
	int c;
	if(c >= 97 && c <=122)
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
