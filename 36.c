#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,l,b=0,n=0,s=0;
gets(a);
l=strlen(a);
printf("%d",l);
for(i=0;i<l;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
n++;
}
else if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
{
b++;
}
else
{
s++;
}}
printf("number of special characters are:%d",b);
return 0;
}
