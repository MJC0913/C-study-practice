#include <stdio.h>
int main(void)
{
	int fahr,lower,upper;
	double celsius;
	printf("Enter lower:\n");
	scanf("%d",&lower);
	printf("Enter upper:\n");
	scanf("%d",&upper);
	if(lower<=upper)
	{
		printf("fahr celsius\n"); 
		for(fahr=lower;fahr<=upper;fahr=fahr+2)
		{
			celsius = (5.0/9.0)*(fahr-32);
			printf("%4d%7.2lf\n",fahr,celsius);
		}
	}
	else
	{
		printf("ÊäÈëÎÞÐ§!!\n");
	}
	return 0;
 } 
