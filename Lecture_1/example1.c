#include <stdio.h>

int main()
{
	int h,w,l,v; //Not really a good practice for declaration with these variable names
	//int height, width, length, volume; //<- better practice
	h=8;
	w=10;
	l=5;
	v = h*w*l;
	printf("Volume %d \n", v); //String formatting where '%d' is replaced by the value of v
	return 0;

	//%d	integer
	//%s	string
	//%c	character
	//%f	decimal form
	//%e	exponential form
}
