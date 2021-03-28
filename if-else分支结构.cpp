#include <stdio.h>
int main(void)
{
	char grade;
	printf("请输入五级制成绩（A~E）；");
	scanf("%c",&grade);
	if (grade=='A')
	{
		printf("%c对应的百分制成绩区间是90~100\n",grade);
	}
	else if (grade=='B')
		{
			printf("%c对应的百分制成绩区间是80~89\n",grade);
		}
		else if (grade=='C')
			{
				printf("%c对应的百分制成绩区间是70~79\n",grade);
			}
				else if (grade=='D')
				{
					printf("%c对应的百分制成绩区间是60~69\n",grade);
				} 
					else if (grade=='E')
					{
						printf("%c对应的百分制成绩区间是50~59\n",grade);
					}
						else
							{
								printf("error")	;
							}	
	return 0;
 }
