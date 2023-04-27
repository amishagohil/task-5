#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int x=9,y=8,xy;
	xy=(x*x*x)+((3*x*y)*(x+y))+(y*y*y);
	printf("(x+y)3 =%d",xy);
	xy=(x*x*x)-(y*y*y)-((3*x*y)*(x+y));
	printf("\n(x-y)3 =%d",xy);
	getch();
	}
