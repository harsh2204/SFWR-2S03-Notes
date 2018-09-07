#include <stdio.h>

int main()
{
	int x =1, y=2;
	double z = 1/10.0;
	double u = z*y*100;

	printf("Enter x:");
	scanf("%d",&x); //& directs to the address of the variable d. Therefore, &d is a memory address
	z = x+2.4;
	printf("z is %4.2f\n",z);
}
