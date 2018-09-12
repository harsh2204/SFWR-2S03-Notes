#include<stdio.h>

#define FREEZING 32.0f
#define SCALE_FACTOR (5.0/9.0f)

int main(void)
{
	float fah, c;
	printf(" Enter Fahreinheit temperature: ");
	scanf("%f", &fah);
	c = (fah -FREEZING)*SCALE_FACTOR;
	printf("\n the equivalent celsius : %.2f\n", c);
	return 0;
}
