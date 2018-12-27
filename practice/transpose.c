#include<stdio.h>

void transpose(int m, int n, int *A, int *B);
void printMatrix(int m, int n, int *A);
void transpose(int m, int n, int *A, int *B){
    //m x n
    printMatrix(m, n, A);
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        // printf("%d\n", A[i]);
        for(int j = 0; j < m; j++)
        {
            printf("A PARAMETER:\t%d -> B PARAMETER:\t%d\n", (i*m+j), (j*n+i));
            *(B+j*n+i) = *(A+i*m+j);
        }   
    }
    printf("\n");
    printMatrix(n, m, B);
}

void printMatrix(int m, int n, int *A){
    for(int i = 0; i < n; i++)
    {
        // printf("%d\n", A[i]);
        for(int j = 0; j < m; j++)
        {
            printf("%d\t", *A++);
        }   
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int m = 2;
    int n = 4;
    int A[n*m];
    int B[n*m]; 
    
    for(int i = 0; i < m*n; i++)
    {
        A[i] = i;
    }
    transpose(m, n, A, B);
    return 0;
}