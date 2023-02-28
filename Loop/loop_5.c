#include<stdio.h>
void main()
{
int n,i,count=0;
printf("Enter the number of n :");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i%5==0)
{
printf("%d\n",i);
count=count+1;
}
}
printf("Count of number is :%d\n",count);
}
