#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter the number");
scanf("%d",&b);
printf("enter upto 1 to %d" ,&b);
for(a=0;a<b;a=a+b)
{
printf("%d \n",&a);
}
getch();
}
