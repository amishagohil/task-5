#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int x=7,y=9,xy;
	xy=(x*x)+(2*x*y)+(y*y);
	printf("(x+y)=%d",xy);
	xy=(x*x)-(2*x*y)+(y*y);
	printf("\n(x-y)=%d",xy);
	getch();
	}