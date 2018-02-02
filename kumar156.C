#include<stdio.h>
voidf main()
{
int b;
scanf("%d",&b);
if(b<=100000)
{
if(b%2==0)
{
printf("even");
}
else if(b%2!=0)
{
printf("odd");
}
}
else
{
printf("enter a valid number");
}
getch();
return 0;
}
