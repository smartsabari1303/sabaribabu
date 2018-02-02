#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
 clrscr();
 printf("enter any number:");
 scanf("%d",&num);
 if(num > 0)
 {
  printf("number is POSITIVE");
  }
 if (num < 0)
 {
  printf("number is NEGATIVE");
  }
 if(num == 0)
 {
  printf("number is ZERO");
  }
 return 0;
 }
