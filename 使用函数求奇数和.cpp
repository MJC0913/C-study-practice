#include <stdio.h>
int even(int n)
{
	if(n%2==0)
	return 1;
	else 
	return 0;
}
int main(void)
{
	int figure,sum=0;
	printf("Enter numbers:\n");
	scanf("%d",&figure);
	while(figure>0) 
	{
		if(even(figure)==0)
		sum=sum+figure;
		scanf("%d",&figure);
	}
	printf("odd numberµÄºÍÎª%d",sum);
	return 0;
 } 
