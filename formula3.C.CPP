#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float x=6,y=8,z=10,xyz;

	xyz=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)+(y+z)+(z+x));
	printf("(x+y+z)3 =%.2f\n",xyz);

	xyz=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z)+(z+x));
	printf("(x-y-z)3 =%.2f\n",xyz);

	xyz=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
	printf("(x-y-z) =%.2f\n",xyz);

	getch();
	}


