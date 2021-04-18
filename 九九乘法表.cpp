#include <stdio.h>
int main(void)
{
	int i,j,t;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			t=i*j;
			printf("%d*%d=%-3.d",j,i,t);
		}
		printf("\n");
	}
	
	return 0;
}
