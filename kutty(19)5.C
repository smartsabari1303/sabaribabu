#include <stdio.h>
#include<conio.h>
int main(void)
{
int n,min,hr;
scanf("%d",&n);
if(n<60)
{
	printf("0 %d",n);
}
else if(n>=60)

{
min=n%60;
hr=n/60;
printf("%d %d",hr,min);
getch();
	return 0;
}
