#include<stdio.h>
int main(void)
{
	double limspeed,speed;
	printf("请输入本车道限速：\n");
	scanf("%lf",&limspeed);
	printf("请输入机动车车速：\n");
	scanf("%lf",&speed);
	if(speed<=limspeed)
	{
		printf("未超速。"); 
	}
	else if((1.0*speed/limspeed>1.0)&&(1.0*speed/limspeed<=1.1))
		{
			printf("罚款100元\n");
		 } 
	else if((1.0*speed/limspeed>1.1)&&(1.0*speed/limspeed<=1.5))
		{
			printf("罚款200元\n");
		 } 
		 else printf("吊销驾驶证！！\n");
	return 0;
}
