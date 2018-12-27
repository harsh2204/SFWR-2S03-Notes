#include<stdio.h>

void array(int n, double *A, int *min, int *max, int *avg, int *pos);
void array(int n, double *A, int *min, int *max, int *avg, int *pos)
{
    *min = *A;
    *max = *A;
    *pos = 0;
    *avg = 0;

    for(int i = 0; i < n; i++)
    {
        if (*A < *min)
            *min = *A;
        if (*A > *max)
            *max = *A;
        if (*A > 0)
            (*pos)++;
        *avg += *A;
        A++;
        /* code */
    }
    *avg /= n;
}


int main(int argc, char const *argv[])
{
    /* code */
    double A[] = {7.0, 49.0, 23.0, -8.0, 30.0, 12.0, -5.0};
    int n = 7;
    int min, max, avg, pos;
    array(n, A, &min, &max, &avg, &pos);
    printf("min %d, max %d, avg %d, pos %d",min, max, avg, pos);
    return 0;
}
