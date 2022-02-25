#include<stdio.h>
int main()
{
int k,o,j,h,sum;
scanf("%d%d%d%d",&k,&o,&j,&h);
sum=k+o+j+h;
if(sum%2==0)
{
printf("Same colour");
}
else
{
printf("Different colour");
}
}


