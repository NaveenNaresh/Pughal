#include<stdio.h>
#include<conio.h>
void main()
{
	int a=150,b=160,t;
if((a!=b)|(a==b))
{
	t=a;
	a=b;
	b=t;
	printf("%d %d",a,b);
}
else
{
	printf("no");
}
getch();
}
