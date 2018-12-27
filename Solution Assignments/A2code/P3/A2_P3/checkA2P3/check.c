#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern void wj2(double x, double a, double b, int N, double *w);
extern void wj(double x, double a, double b, int N, double *w);

double max_norm(int size, double *v, double *u) {
	double diff, norm = 0;
	for (int i = 0; i < size; i++) {
		diff = fabs(v[i] - u[i]);
		if (norm < diff)
			norm = diff;
	}
	return norm;	
}

int main(int argc, char **argv) {
  if (argc != 5) {
    printf("\n Usage sinc N  a b x \n");
    return 1;
  }
  int    N = atoi(argv[1]);
  double a = atof(argv[2]);
  double b = atof(argv[3]);
  double x = atof(argv[4]);

  double w2[2 * N + 1];
  double w[2 * N + 1];
  wj2(x, a, b, N, w2);
  wj(x, a, b, N, w);
  double norm_diff;
  norm_diff = max_norm(2*N+1, w2, w);  
  
  printf(" norm of difference = %2.5e \n", norm_diff);
  
  printf(" Details: \n");
  int p[5] = {0, N/2, N, N+N/3, 2*N};
  
  for(int j = 0; j < 5; j++) {
	  int i = p[j];
	  printf(" i = %3d\t error = %15.3e\n", i, (w2[i] - w[i]));
  }
  
  return 0;
}
