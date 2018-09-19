#include <stdio.h>

int main()
{
	int f = 1023;
	int i = 0;
	while (f)
	{
		f = f/10;
		i++;
		printf("%d\n", i);
	}
	printf("i = %d\n", i);
	return 0;
}
