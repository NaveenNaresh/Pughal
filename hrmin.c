#include<stdio.h>
#include<conio.h>
void main()
{
int n,hour,minute,seconds;
printf("Enter seconds:");
scanf("%d",&n);
if(n>3600)
{
min=n/60;
sec=n%60;
hour=min/60;
min=min%60;
printf("converted format%d hour %d min % secs",hr,min,sec);
}
else
{
min=n/60;
sec=n%60;
printf("converted format %d min %d secs:min,secs);
}
}
