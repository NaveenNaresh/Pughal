#include<stdio.h>
#include<conio.h>
void main()
{
char s[200];
int count=o,i;
printf("Enter the string\n");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count++;
}
printf("Number of words in given string are:%d\n",count+1);
}
