#include <stdio.h>
int sign(int x);
int main(void)
{
	int x,result;
	printf("请输入一个整数x：");
	scanf("%d",&x);
	result=sign(x);
	printf("%d",result);
	return 0;
 } 
int sign(int x)
{
	if(x>0)
	return 1; 
	else if(x==0)
	return 0;
	else 
	return -1;
}
