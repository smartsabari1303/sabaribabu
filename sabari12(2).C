#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int n,fact=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
  getch();
	return 0;
}
