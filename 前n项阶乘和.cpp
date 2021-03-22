#include<stdio.h>
int fact(int n);
int main(void)
{
	int i,n,result;
	printf("请输入一个正整数n：");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		result+=fact(n);
	 } 
	 printf("前n项阶乘之和等于%d\n",result);
 } 
 int fact(int n)
{
 	int i,product=1;
 	for(i=1;i<=n;i++)
 	{
 		product*=i;
	} 
	return product; 
}
