#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int x=2,y=1,z=5,xy;
	clrscr();
	xy =(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y))+(y+z)+(z+x);
	printf("x+y+z3=%d",xy);
	getch();
}