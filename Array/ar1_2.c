#include<stdio.h>
void main()
{
int n,i,temp,sum=0,sum1=0,j,total;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
sum = n*(n+1)/2;
for(i=0;i<n-1;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
sum1 = sum1 + a[i];
}
total = sum - sum1;
printf("Missing number is :%d\n",total);
}
