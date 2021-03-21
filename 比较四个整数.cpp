#include <stdio.h>
int main(void)
{
	int a,b,c,d,max,min;
	printf("请输入四个整数，并用逗号隔开：");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	max=a,min=a;
	if (b>max) max=b;
	else min=b;
	if (c>max) max=c;
	else if(min>c) min=c;
	if (d>max) max=d;
	else if (min>d) min=d;
	printf("最大值：%d，最小值：%d\n",max,min);
	return 0;
 } 
