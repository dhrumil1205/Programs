#include<stdio.h>
void main()
{
int n,i;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b[i] = a[i];
printf("b[%i] :%d\n",i,b[i]);
}

}
