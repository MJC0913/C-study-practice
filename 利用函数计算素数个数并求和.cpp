#include <stdio.h>
int prime(int m);
int main(void) 
{
	int m,n,sum=0,number,t,count=1;
	printf("输入两个正整数m和n（1<=m,n<=500）:");
	scanf("%d %d",&m,&n);
	if(1<=m&&n<=500&&m<n)
	{
		printf("m和n之间的素数有：");
		for(number=m;number<=n;number++)
		{
			t=prime(number);
			if (t==1)
			{
				if(count!=1)
				printf(",");
				count++;
				printf("%d",number);
				sum=sum+number;
			}
		}
		printf("\n");
		printf("素数个数是%d，数和为%d",count,sum);
	}
	return 0;
}
int prime(int m)
{
	int i;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			return 0;
		}
	}
	return 1;
}
