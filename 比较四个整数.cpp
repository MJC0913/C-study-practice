#include <stdio.h>
int main(void)
{
	int a,b,c,d,max,min;
	printf("�������ĸ����������ö��Ÿ�����");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	max=a,min=a;
	if (b>max) max=b;
	else min=b;
	if (c>max) max=c;
	else if(min>c) min=c;
	if (d>max) max=d;
	else if (min>d) min=d;
	printf("���ֵ��%d����Сֵ��%d\n",max,min);
	return 0;
 } 
