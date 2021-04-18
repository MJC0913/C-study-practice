#include <stdio.h>
double fact(int i);
int main(void)
{
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("%.2lf\n",fact(n));
	return 0; 
 } 
 double fact(int n)
 {
 	double s=0;
 	int i,a=2,b=1,t;
 	for(i=1;i<=n;i++)
 	{
 		s=(double)a/b+s;
 		t=a;
		a=a+b;
		b=t;	
	 }
 	return s;
 }
