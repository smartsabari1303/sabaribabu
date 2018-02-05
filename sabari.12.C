#include<stdio.h>
#include<conio.c>
int main()
{
     int a;
     printf("enter the year");
     scanf("%d",&a);
     if(a/4)
     {
         printf("year is a leap");
     }
    else
    {
        printf("year is not leap");
        getch();
        return 0;
    }
}
