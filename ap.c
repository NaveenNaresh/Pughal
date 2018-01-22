#include<stdio.h>
#include<conio.>
int main()
{
ini first,diff,terms,value,sum=0,i;
printf("Ener the number of terms in AP series\n");
scanf("%d",&terms);
printf("Enter the first term and column difference of AP series\n");
scanf("%d %d",&first,&difference);
value=first;
printf("AP series\n");
for(i=0;i<terms;i++)
{
printf("%d",value);
sum+=value;
value=value+difference;
}
printf("\n sum of the AP series till%d terms is %d\n";rems,sum);
getch();
return 0;
}
