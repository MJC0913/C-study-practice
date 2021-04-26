#include <stdio.h>
#include <math.h>
double dist(double x1,double y1,double x2,double y2)
{
	return sqrt(pow((x1-x2),2.0)+pow((y1-y2),2.0));
}
int main(void)
{
	double x1,x2,y1,y2;
	printf("请输入平面上两个点的坐标：");
	scanf("(%lf,%lf)(%lf,%lf)",&x1,&y1,&x2,&y2); 
	double distance;
	distance=dist(x1,y1,x2,y2);
	printf("distance=%.2lf",distance);
	return 0;
}



