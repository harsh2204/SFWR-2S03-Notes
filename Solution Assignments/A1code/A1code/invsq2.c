#include<stdio.h>
#include<math.h>

int main()
{
  double a, x1, x2, err;
  printf("Enter a: ");
  scanf("%lf", &a);
  
  x1 = 2.0/(1+a);
  while (1)
    {
      x2 = x1 * (1.5f - 0.5f * a * x1 * x1);
      err = fabs(x2-1/sqrt(a))*sqrt(a);;
      printf(" %.15e   % 8.2e \n", x2, err);
      if (err <= 1e-13)
	break;
      x1 = x2;
    }
  return 0;
}
