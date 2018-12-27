
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 8000

int genmatrix(int testcase, double A[]);
void genvector(int n, double b[]);
double checkresult(int n, int flag, double A[], double b[], double x[], int testcase);
int linsolve(int n, double A[], double b[], double x[]);
double A[N * N], B[N*N], b[N], c[N], x[N];
void printAns(double A[], double b[], double x[], int n);

int main(int argc, char **argv) {
  int n, testcase; 
  double mark, total = 0;

  for (testcase = 1; testcase <= 4; testcase++) {
      n = genmatrix(testcase, A);
      genvector(n,b);
     
      // Save A so we use it to check the result.
      memmove(B,A,n*n*sizeof(double));
      memmove(c,b,n*sizeof(double));
  
      // You can overwrite A.
      int success = linsolve(n, A, b, x); 
      // printAns(B,c,x,n);
      mark = checkresult(n, success, B, c, x, testcase); 
      printf("- mark %lf \n", mark);
      fflush(stdout);
      total += mark;
  }
  printf("Total: %lf\n", total);
  return 0;
}
