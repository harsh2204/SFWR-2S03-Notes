#include <math.h>
#include <stdio.h>

#define A(i,j)   A[(i-1)*n+(j-1)]
#define b(i)     b[i-1]
#define x(i)     x[i-1]

int linsolve(int n, double A[], double b[], double x[])
{
  int row, i,j;
  double factor, sum;

  // Forward elimination
  for (row=1; row<=n-1; row++)
    {
      for (i=row+1; i<=n; i++)
	{
	  if ( fabs(A(row,row)) < 1e-16 ) return 0;
	  factor = A(i,row) / A(row,row);
	  for (j = row; j<=n; j++)
            A(i,j) = A(i,j) - factor*A(row,j);
	  b(i) = b(i) - factor*b(row);
	}
    }
  
  // Backward substitution
  x(n) = b(n) / A(n,n);
  for (row = n-1; row>= 1; row--)
    {
      sum = b(row);
      for (j = row+1; j<=n; j++)
        sum = sum - A(row,j) * x(j);
      x(row) = sum / A(row,row);
    }
  
  return 1;
}
