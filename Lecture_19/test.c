#include<stdio.h>
void fun(int *n){
	n = 10;
}
int main(){
	int n = 4;
	fun(n);
	printf("%d", n);
	return 1;
}
