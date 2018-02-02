#include<stdio.h>
#include<conio.h>
int main()
{
char a;
printf("enter the letter");
scanf("%c",&a);
if((a>='a')&&(a<='z'))
printf("letter is alphebet");
else
printf("letter is not alphabet");
getch();
return 0;
}
