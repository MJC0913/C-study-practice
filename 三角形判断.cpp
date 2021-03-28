#include <stdio.h>
#include <math.h>
int main(void)
{	
	int x1,x2,x3,y1,y2,y3,circumference;
	double a,b,c,area,s;
	printf("请输入三个坐标");
	scanf("(%d,%d) (%d,%d) (%d,%d)",&x1,&y1,&x2,&y2,&x3,&y3);
	a=sqrt(pow((x1-x2),2)+pow((y1-y2),2)); 
	b=sqrt(pow((x2-x3),2)+pow((y2-y3),2)); 
	c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
	if(a+b>=c&&a+c>=b&&b+c>=a)
	{
		circumference=a+b+c;
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area=%.2lf,circumference=%d",area,circumference);
	}
	else
	{
		printf("erorr");
	}
	return 0;
}

