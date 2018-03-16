 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int n,i,r=0;
 	printf("input\n");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		r=r+i;
 	}
 	printf("sum=%d",r);
  getch();
 	return 0;
 }
