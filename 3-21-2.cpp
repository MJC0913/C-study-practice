#include<stdio.h>
int main(void)
{
	int n,i,r=1;
	printf("������һ��������");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			r=0 ;
			break; 
		}
	}
	if(r==0)
	printf("������������");
	else
	printf("����������");
	return 0;
}
