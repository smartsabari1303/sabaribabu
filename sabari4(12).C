#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int n,i,a[n],lar;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	lar=a[0];
	for(i=0;i<n;i++)
	{
		
	if(lar<a[i])
	lar=a[i];
	}
	printf("%d",lar);
  getch();
	return 0;
}
