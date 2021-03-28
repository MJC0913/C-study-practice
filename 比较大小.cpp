#include <stdio.h>
int main(void)
{
	int a,b,c,max,min,mid;
	printf("Enter a b c:");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(a>b)
	{
		min=b;
		if(a>c)
		{
			if(c>b)
			{
				mid=c;
			}
			else
			{
				mid=b,min=c;
			}
		}
		else
		{
			max=c,mid=a;
		}
	}
	else
	{
		max=b,min=a;
		if(b>c)
		{
			if(c>a)
			{
				mid=c;
			}
			else
			{
				mid=a,min=c;
			}
		}
		else
		{
			max=c,mid=b;
		}
	}
	printf("max=%d,mid=%d,min=%d\n",max,mid,min);
	return 0;
 } 
