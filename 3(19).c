#include <stdio.h>
#include<conio.h>
int main()
{
	int i,n,k,array[50],count=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]==k)
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
  getch();
	return 0;
}
