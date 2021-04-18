#include <stdio.h>
int main(void)
{
int x=3456;

int n=0;

do{

       n++;

       x=x/10;

}while(x>0);

printf("%d\n",n);



	return 0;
 } 
