#include<stdio.h>
void main()
{
int t,s=0,a,n;
printf("Enter the number\n");
scanf("%d",&n);
t=n;
while(n!=0)
{
a=n%10;
s=s+(a*a*a);
n=n/10;
}
if(s==t)
{
printf("armstrong");
}
else
{
printf("Not an armstrong");
}
}
