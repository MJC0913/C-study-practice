#include<stdio.h>
int main(void)
{
	int a,b,c,d,sum;
	double average;
	printf("�������ĸ����������ö��Ÿ�����");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	sum=a+b+c+d;
	average=(a+b+c+d)/4.0;
	printf("sum=%d,average=%.3lf",sum,average); 
	return 0;
}
