
#include <stdlib.h>
#define SMALL 1000
#define BIG 8000
// Lucas: Removed int n (matrix/vector size) because we have specific test cases already
// Instead, return the size n  to be used in linsolve and checkresult
int genmatrix(int testcase, double A[])
{
    // complying with ansi restrictions: declaring variables ahead of loops
    int i, j;
    switch (testcase) {
        case 1: // System of infinite solutions
          for (i = 1; i <= 3; i++)
            for (j = 1; j <= 3; j++)
                A[(i-1)*3+(j-1)] = i*j;
          return 3;
        case 2: // Hilbert 5x5
           for (i = 0; i <= 4; i++)
               for (j = 0; j <= 4; j++)
                   A[i*5+j] = 1.0/(i+j+1); // 1/((i+1)+(j+1)-1)
           return 5;
       case 3: // n = SMALL random
           for (i = 0; i < SMALL; i++)
               for (j = 0; j < SMALL; j++)
                   A[i*SMALL+j] = drand48();
           return SMALL;
       case 4: // n = BIG random
           for (i = 0; i < BIG; i++)
               for (j = 0; j < BIG; j++)
                   A[i*BIG+j] = drand48();
           return BIG;
    }
    // won't happen
    return -1;
}

// n shall be passed from genmatrix - generates required vector of random values
void genvector(int n, double b[])
{
  if (n == 3) {
      b[0] = -4; b[1] = -5; b[2] = 2;
      return;
  }
  int i;
  for (i=0; i<n; i++)
    b[i] = drand48();
}
