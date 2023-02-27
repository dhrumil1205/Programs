#include<stdio.h>
void main()
{
int n,i,temp;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
temp=a[n-1];
for(i=n-1;i>0;i--)
{
a[i]=a[i-1];
}
a[0]=temp;
for(i=0;i<n;i++)
{
printf("Cyclic reverse array element %d :%d\n",i,a[i]);
}
}
