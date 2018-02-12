#include <stdio.h>
#include<conio.h>
int main(void) 
{
int N,i,result;
scanf("%d",&N);
for(i=1;i<=5;i++)
{
	result=N*i;
	printf("%d ",result);
  getch();
	return 0;
}
