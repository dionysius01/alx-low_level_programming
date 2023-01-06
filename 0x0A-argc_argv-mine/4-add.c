#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc == 1)	
	{
		int zero = 0;
		printf("%d\n", zero);
	}else
	{
		int i;
		int b = 0;
		for(i=1; i < argc; i++)
		{
			int a = atoi(argv[i]);
			b+=a;
		}
		printf("%d\n", b);
	}
}
