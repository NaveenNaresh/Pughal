#include<stdio.h>
#include<conio.h>
main()
{
char s[100];
int i=0,1=0,s=1;
clrscr();
printf("Enter any string\n");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]<=9||s[i]>=9)
{
1=1+i;
}
}
printf("The number of characters in the string are %d\n",1);
getch();
}
