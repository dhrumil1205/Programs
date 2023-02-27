#include<stdio.h>
void main()
{
int n,i,j=0;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
int rev[n];
for(i=n-1;i>=0;i--)
{
rev[j]=a[i];
printf("Reverse array is rev[%d]:%d\n",j,rev[j]);
j++;
}

}
