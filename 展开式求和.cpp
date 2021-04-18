#include <stdio.h>
#include <math.h>
double fact(double n);
int main(void)
{
	int i;
	double x,s; 
	s=0;
	printf("请输入一个实数x：");
	scanf("%lf",&x);
	for(i=0;;i++)\
	{
		s=pow(x,i)/fact(i)+s;
		if(pow(x,i)/fact(i)<0.0001)
		{
			break;
		}
	}
	printf("s=%.4lf",s);
	return 0;
 } 
 double fact(double n)
 {
 	int a;
 	double s=1;
 	for(a=1;a<=n;a++)
 	{
 		s=a*s;
	 }
	 return s;
 }
 
