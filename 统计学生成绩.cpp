#include <stdio.h>
int main(void)
{
	int n,t,x,countA=0,countB=0,countC=0,countD=0,countE=0,erorr=0;
	printf("Enter n:");
	scanf("%d",&n);\
	printf("请输入n个学生成绩，并用空格隔开：\n");
	for(t=1;t<=n;t++)
	{
		scanf("%d",&x);
		if(x>=90)
		{countA++;}
		else if(x<90&&x>=80)
		{countB++;}
		else if(x<80&&x>=70)
		{countC++;}
		else if(x<70&&x>=60)
		{countD++;}
		else if(x<60&&x>=50)
		{countE++;}
		else 
		{erorr++;}
	}
	printf("A=%d,B=%d,C=%d,D=%d,E=%d,erorr=%d",countA,countB,countC,countD,countE,erorr);
	return 0;
 } 
