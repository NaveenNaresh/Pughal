#include<stdio.h>
#include<conio.h>
void main()
{
int array[maximum size];
int i,N;
printf("Enter the size of array;");
scanf("%d",&N);
printf("Enter %d elements in the array:",N);
for(i=0;i<N;i++)
{
scanf("%d",&array[i]);
}
printf("\n elements in array are:");
for(i=0;i<N;i++)
{
printf("%d",array[i]);
}
return 0;
}
