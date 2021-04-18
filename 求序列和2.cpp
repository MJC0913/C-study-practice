#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,n,result,i,t,result2=0;
	result =0;
	printf("请输入两个正整数a和n:\n");
	scanf("%d %d",&a,&n);
	for(i=0;i<n;i++)
	{
		for(t=0;t<=i;t++)
		{
			result2=result2+a*pow(10,t);
			//printf("%d\n",result2);
		}
		result=result+result2;
		result2=0;
	}
	printf("%d",result); 
	return 0;
}
