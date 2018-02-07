#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,k,result;
printf("\nenter the n:");
scanf("%d",&n);
printf("\nenter the k:");
scanf("%d",&k);
result=pow(n,k);
printf("the result is :%d",result);
getch();
return 0;
}
