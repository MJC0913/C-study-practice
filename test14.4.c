#include <stdio.h>

int main()
{
	int i,j,h,g;
	
	for(i=0,j=100;i<j;i++,j--)
	{
		printf("%d  %d\n",i,j);
	}
	
	for( h=1;h<4;h++)
	{
		for( g=0;g<3;g++)
		printf("%d  %d\n",h,g);
	}

	
	return 0;
 } 
