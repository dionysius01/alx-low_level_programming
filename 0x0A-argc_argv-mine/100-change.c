#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc == 2)
	{
		printf("Error\n");
	} else {
		int a = atoi(argv[1]);
		if(a < 0)
		{
			printf("0\n");
		}

