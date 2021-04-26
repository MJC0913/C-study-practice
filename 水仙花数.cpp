#include <stdio.h>
#include <math.h>
int flower(int n)
{
	int a,b,c;
	a=n/100;
	b=n%100/10;
	c=n%10;
	if(n==pow(a,3)+pow(b,3)+pow(c,3))
	return 1;
	else 
	return 0;
 } 
 int main(void)
 {
 	int i,judje,count=0;
	printf("三位的水仙花数为：");
	for(i=100;i<1000;i++)
	{
		judje=flower(i);
		if(judje==1)
		{
			count++;
			if(count!=1)
			{
				putchar(',');
			}
			printf("%d",i);
		}
	}
 	return 0;
  } 
