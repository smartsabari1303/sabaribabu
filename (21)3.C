#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[50];
	int i,count=0;
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i] == ' ')
		count++;
		
		
	}
	printf("%d",count);
  getch();
	return 0;
}
