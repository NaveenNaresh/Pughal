#include<stdio.h>
#include<conio.h>
void main()
{
int num,power,result=1;
printf("Enter the number:");
scanf("%d%d",&num,&power);
while(power!=0)
{
result=result*num;
--power;
}
printf("%d",result);
}
