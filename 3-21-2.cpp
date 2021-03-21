#include<stdio.h>
int main(void)
{
	int n,i,r=1;
	printf("请输入一个整数：");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			r=0 ;
			break; 
		}
	}
	if(r==0)
	printf("该数不是素数");
	else
	printf("该数是素数");
	return 0;
}
