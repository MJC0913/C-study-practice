#include<stdio.h>
int main(void)
{
	double limspeed,speed;
	printf("�����뱾�������٣�\n");
	scanf("%lf",&limspeed);
	printf("��������������٣�\n");
	scanf("%lf",&speed);
	if(speed<=limspeed)
	{
		printf("δ���١�"); 
	}
	else if((1.0*speed/limspeed>1.0)&&(1.0*speed/limspeed<=1.1))
		{
			printf("����100Ԫ\n");
		 } 
	else if((1.0*speed/limspeed>1.1)&&(1.0*speed/limspeed<=1.5))
		{
			printf("����200Ԫ\n");
		 } 
		 else printf("������ʻ֤����\n");
	return 0;
}
