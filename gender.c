#include<stdio.h>
main()
{
int n,i,temp=0;
printf("Enter number of People:");
scanf("%d",&n);
if(n<=10)
{
printf("Enter the gendes start letter one by one:");
char a[n];
for(i=0;i;){
scanf("%c",&a[i]);
}
for(i=1;i;) {
if(a[i-1]==a[i])
temp=1;
}
if(temp==1)
printf("Invalid");
}
else
printf("Invalid");
}


