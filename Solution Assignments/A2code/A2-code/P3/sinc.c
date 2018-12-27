#include <math.h>
#include <stdlib.h>

double sinc(double x);
double comph(int N);
double comprho(double x, double a, double b);
double complambda(double x, double h, double a, double b, int j);

// Create a macro. W(-N) must be w[0].
#define W(j) w[N + j]

void wj(double x, double a, double b, int N, double *w) 
{
  // We have to return -N, -N+1 ...-1 0 1 ... N-1 N
  // w must be of size 2*N+1;
  
  double h      = comph(N);
  double rho    = comprho(x, a, b);
  double oneexp = (1 + exp(-N * h));
  
  double sum1 = 0, sum2 = 0;
  for (int j = -N + 1; j <= N; j++) {
    double expjh = exp(j * h);
    double t     = complambda(x, h, a, b, j) / (1 + expjh);
    sum1 += t;
  }
  for (int j = -N ; j <= N -1; j++) {
    double expjh = exp(j * h);
    double t     = complambda(x, h, a, b, j) / (1 + expjh);
    sum2 += expjh * t;
  }
  W(-N) = oneexp * (1 / (1 + rho) - sum1);
  W(N)  = oneexp * (rho / (1 + rho) - sum2);
  
  for (int j = -N + 1; j <= N - 1; j++)
    W(j)     = complambda(x, h, a, b, j);
}

double sinc(double x) 
{
  if (x == 0)
    return 1;
  return sin(M_PI * x) / (M_PI * x);
}

double comph(int N) 
{ return M_PI / (sqrt(2 * N)); }

double comprho(double x, double a, double b) 
{ return (x - a) / (b - x); }

double complambda(double x, double h, double a, double b, int j) 
{
  double t    = comprho(x, a, b);
  t           = (log(t) - j * h) / h;
  return sinc(t);
}
