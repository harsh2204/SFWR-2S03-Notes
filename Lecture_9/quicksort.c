#include<stdio.h>

int split(int a[], int p, int r);
void swap(int a[], int i, int j);
void qsort(int a[], int low, int high);

int split(int a[], int p, int r)
{
	int x= a[r];
	int i = p-1;
	for(j=p;j<r;j++){
		if(a[j] <= x){
			i++;
			swap(a, a[j], a[i]);
		}
	}
	swap(a, a[i+1], a[r]);
	return i+1;
}
void qsort(int a[], int low, int high)
{
	if(low > high)	return;
	int index = split(a, low, high);
	qsort(a, low, index-1);
	qsort(a, index+1, high);
}
void swap(int a[], int i, int j)
{
	int t;
	t = a[i];
	a[i] = a[j];
	a[j] = t;
}

