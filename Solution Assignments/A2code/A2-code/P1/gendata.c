
#include <stdlib.h>

void genmatrix(int n, double A[])
{
  for (int i=0; i<n*n; i++)
    A[i] = drand48();
}

void genvector(int n, double b[])
{
  for (int i=0; i<n; i++)
    b[i] = drand48();
}
