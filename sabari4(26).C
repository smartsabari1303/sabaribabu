#include <stdio.h>
#include<conio.h>
int main(void) {
	int a,b,t;
	printf("enter the 2 numbers");
	scanf("%d%d",&a,&b);
	t=b;
	b=a;
	a=t;
	printf("%d %d",a,b);
  getch();
	return 0;
}
