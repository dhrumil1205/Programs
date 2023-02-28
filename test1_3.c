#include<stdio.h>
void main()
{
int n,i,temp=0;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i=i+2)
{
temp = a[i];
a[i] = a[i+1];
a[i+1] = temp;
}
for(i=0;i<n;i++)
{
printf("New array is a[%d] :%d\n",i,a[i]);
}
}
