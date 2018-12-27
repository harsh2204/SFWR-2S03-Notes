#include <math.h>
#include <stdio.h>
#define TOLERANCE 1e-5 

#define A(i,j)   A[(i-1)*n+(j-1)]
#define b(i)     b[i-1]
#define x(i)     x[i-1]

double checkresult(int n, int flag, double A[], double b[], double x[], int testcase)
{  
  if (testcase == 1) {
      if (!flag) {
          printf("Infinite solution flag active: Correct, "); 
          fflush(stdout);
          return 1.5; 
      }
      else {
          printf("Infinite solution flag not active: Incorrect, ");
          fflush(stdout);
          return 0;
      }
  }

  int row, col;
  
  // Check how well x satisfies A*x = b
  // find the largest b
  double max_b=0;
  max_b = 0;
  for (row=1; row<=n; row++)
    if ( fabs(b(row)) > max_b)
      max_b = fabs(b(row));
  
  // Compute b-A*x and store it in b
  double sum, max_error;
  for (row=1; row<=n; row++)
    {
      sum = 0;
      for (col=1; col<=n; col++)
	sum += A(row,col)*x(col);
      b(row) = b(row)-sum;
    }
  
  // find the largest relative error
  max_error = 0;
  for (row=1; row<=n; row++)
    if ( fabs(b(row)) > max_error)
      max_error = fabs(b(row));
  max_error /= max_b;
  
  printf("n = %5d, error %.1e ", n, max_error);  
  fflush(stdout);
  if (max_error < TOLERANCE) { 
    switch (testcase) {
    case 2: case 3: return 1.5;
    case 4: return 2.5;
    }
  }
  else return 0;   
}
