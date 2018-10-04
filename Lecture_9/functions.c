#include<stdio.h>

void set_zeros(int n, int a[]);
long int fact(int n);


int main()
{
//	int n = 10;
//	int a[10];
//	set_zeros(n, a);
//	int i;
//	printf("[");
//	for(i=0; i<10; i++)
//		printf("%d, ", a[i]);	
//	printf("]");
	int n;
	scanf("%d", &n);
	long int factorial = fact(n);
	printf("%ld", factorial);
	
}

void set_zeros(int n, int a[])
{
	int i;
	for(i = 0; i<n; i++)
		a[i]=0;
}
long int fact(int n)
{
	if(n==1) return 1;
	return n*fact(n-1);
}
