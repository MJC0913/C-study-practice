#include <stdio.h>
int jishu(int t)
{
	if(t%2!=0)
	return 1;
	else
	return 0;
}
int main(void)
{
	int number,i,tf,sum;
	sum=0;
	printf("������һ�����������������������:"); 
	scanf("%d",&number);
	while(number>0)
	{
		tf=jishu(number);
		if (tf==1)
		sum=sum+number;
		scanf("%d",&number);
	}
	printf("������Ϊ%d\n",sum);
	return 0;
 } 
