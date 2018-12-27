#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int *n, int *A)
{
    
    for(int i = 0; i < (*n/2); i++)
    {
        swap((A+i), (A+(*n-i-1)));
    }
    
}

int main(int argc, char const *argv[])
{   
    int A[] = {7, 49, 23, 8, 30};
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        printf("%d, ", *(A+i));
    }
    printf("\n");
    reverse(&n, A);
    for(int i = 0; i < n; i++)
    {
        printf("%d, ", A[i]);
    }
    
    /* code */
    return 0;
}
