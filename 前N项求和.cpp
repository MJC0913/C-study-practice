#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,c,e,s;
	double sum=0,sum2=0,sum3=0;
	printf("请输入一个数n：");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		sum=sum+1.0/c;
	} 
	for(e=1;e<=n;e=e+2)
	{
		sum2=sum2+1.0/e;
	}
	for(s=1;s<=n;s=s+3)
	{
		sum3=pow((-1),(s-1))+sum3;
	}
	printf("sum=%.3lf\nsum2=%.3lf\nsum3=%.3lf",sum,sum2,sum3);
	return 0;
}
