#include <stdio.h>
int main(void)
{
	int a,b,c,d,t,i;
	printf("请输入四个整数（并用空格隔开）：\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	for(i=1;i<=4;i++) 
	{
		if(a>b)
		{
			t=a;
			a=b;
			b=t;
		}
		if(b>c)
		{
			t=b;
			b=c;
			c=t;
		}
		if(c>d)
		{
			t=c;
			c=d;
			d=t;
		}
		if(a<b&&a<c&&a<d&&b<c&&b<d&&c<d)
		{
			break;
		}
	}
printf("%d<%d<%d<%d",a,b,c,d);
	return 0;
}
