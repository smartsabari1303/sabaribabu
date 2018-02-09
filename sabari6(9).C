#include<stdio.h>
#include<conio.h.
int main()
{
int num,r,sum=0,temp;
printf("enter a 3 digit number");
scanf("%d",&num);
temp=num;
while(num |=0)
{
r=num%10;
num=num/10;
sum=sum+(r*r*r);
}
if(sum==temp)
printf("armstrong number")
else
printf("not an armstrong number");
getch();
return 0;
}
