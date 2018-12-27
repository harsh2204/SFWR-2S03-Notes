#include <math.h>
#include <stdlib.h>

double sinc2(double x);
double comph2(int N);
double comprho2(double x, double a, double b);
double complambda2(double x, double h, double a, double b, int j);

// Create a macro. W(-N) must be w[0].
#define W(j) w[N + j]

void wj2(double x, double a, double b, int N, double *w) 
{
  // We have to return -N, -N+1 ...-1 0 1 ... N-1 N
  // w must be of size 2*N+1;
  
  double h      = comph2(N);
  double rho    = comprho2(x, a, b);
  double expNh = exp(N * h);
  double oneexp = 1 + exp(-N * h);
  
  double sum1 = 0, sum2 = 0;
  for (int j = -N + 1; j <= N - 1; j++) {
    W(j)     = complambda2(x, h, a, b, j);
    double expjh = exp(j * h);
    double t     = W(j) / (1 + expjh);
    sum1 += t;
    sum2 += ( expjh * t );
  }
  sum1 += complambda2(x, h, a, b, N) / (1 + expNh);
  sum2 += (oneexp - 1) * complambda2(x, h, a, b, -N) / oneexp;
  W(-N) = oneexp * (1 / (1 + rho) - sum1);
  W(N)  = oneexp * (rho / (1 + rho) - sum2);
}

double sinc2(double x) 
{
  if (x == 0)
    return 1;
  return sin(M_PI * x) / (M_PI * x);
}

double comph2(int N) 
{ return M_PI / (sqrt(2 * N)); }

double comprho2(double x, double a, double b) 
{ return (x - a) / (b - x); }

double complambda2(double x, double h, double a, double b, int j) 
{
  double t    = comprho2(x, a, b);
  t           = (log(t) - j * h) / h;
  return sinc2(t);
}
