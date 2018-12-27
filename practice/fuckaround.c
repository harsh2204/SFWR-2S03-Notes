#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {7, 49, 23, 8, 30};
    int n = 5;
    int *p = &A[n];
    for(int i = n-1; i >=0 ; i--)
    {
        // printf("%d, ", *--p);
    }

    int a = 4;
    int *b = &a;
    int *c = b;
    printf("%d -> %d -> %d\n", c, b, &a);
    b = A;
    printf("%d -> %d -> %d", c, b, &a);
    // *--p does the subtraction first and then looks up the address
    // *p-- looks up the address and then moves the pointer value down
    return 0;
}
