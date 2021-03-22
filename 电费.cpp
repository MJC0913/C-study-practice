#include <stdio.h>
int main(void)
{
	int elc;
	double money;
	printf("Enter ele:");
	scanf("%d",&elc);
	if(elc>=0)
	{
		if(elc<=50)
		{
			money=0.53*elc;
		}
		else
		{
			money=0.53*50+(elc-50)*0.58;
		}
		printf("money=%.3lf\n",money);
	}
	else
	{
		printf("Invalid Value!\n");
	}
	return 0;
}
