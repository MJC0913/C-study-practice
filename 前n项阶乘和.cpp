#include<stdio.h>
int fact(int n);
int main(void)
{
	int i,n,result;
	printf("������һ��������n��");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		result+=fact(n);
	 } 
	 printf("ǰn��׳�֮�͵���%d\n",result);
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
