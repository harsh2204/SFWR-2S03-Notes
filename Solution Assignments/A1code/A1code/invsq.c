#include<stdio.h>
#include<math.h>

int main()
{
  double a, x, e;
  int n, i;
  printf("Enter a, x0, and n: ");
  scanf("%lf%lf%d", &a, &x, &n);
  

  for(i=0; i<n; ++i)
    {
      x = x * (1.5f - 0.5f * a * x * x);
      e = fabs(x-1/sqrt(a))*sqrt(a);
      printf("%3d %.15e  %8.2e\n", i+1, x, e);
    }
}
