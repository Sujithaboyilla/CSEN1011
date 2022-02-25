#include<stdio.h>
 int main()
{
char mb[100];
int k,item,rate,quantity,total,final,length;
printf("Enter the mobile number:");
scanf("%s",mb);
length=strlength(mb);
if(length!=10)
{
printf("Invalid entry");
}
else
{
printf("\nEnter the number of items:");
scanf("%d",&item);
final=0;
for(k=1;k<=item;k++)
{
printf("Enter the quantity:");
scanf("%d",&quantity);
printf("Enter the rate:");
scanf("%d",&rate);
total=quantity*rate;
final=final+total;
}
if(final>0)
{
printf("The total price is %d",final);
}
else
{
printf("Invalid amount");
}
}
}
