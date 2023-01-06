#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc == 3)
	{
		int mul, a, b;
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
		return 0;
	}else
	{
		printf("Error\n");
		return 1;
	}
}
