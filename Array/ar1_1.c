#include<stdio.h>
void main()
{
int n,i,temp,flag=0,j;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
		flag=1;
		}
	}
if(flag==0)
{
printf("Leaders :%d\n",a[i]);
}
flag=0;
}
}
