#include <stdio.h>
int main(void)
{
	char grade;
	printf("�������弶�Ƴɼ���A~E����");
	scanf("%c",&grade);
	if (grade=='A')
	{
		printf("%c��Ӧ�İٷ��Ƴɼ�������90~100\n",grade);
	}
	else if (grade=='B')
		{
			printf("%c��Ӧ�İٷ��Ƴɼ�������80~89\n",grade);
		}
		else if (grade=='C')
			{
				printf("%c��Ӧ�İٷ��Ƴɼ�������70~79\n",grade);
			}
				else if (grade=='D')
				{
					printf("%c��Ӧ�İٷ��Ƴɼ�������60~69\n",grade);
				} 
					else if (grade=='E')
					{
						printf("%c��Ӧ�İٷ��Ƴɼ�������50~59\n",grade);
					}
						else
							{
								printf("error")	;
							}	
	return 0;
 }
