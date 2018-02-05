#include<stdio.h>
#include<conio.h>
int main()
{
int i,sum = 0,a;
clrscr();
printf("Enter the number\n");
scanf("%d", &a);
for (i=1;i<=a;i++)
{
printf("%d",i);
sum = sum + i;
}
getch();
return 0;
}
