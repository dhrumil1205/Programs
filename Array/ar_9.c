#include<stdio.h>
void main()
{
int n,l=0,r=0,j,k,flag=1,i;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<n+1;i++)
{
l=0;
r=0;
j=i;
	for(i=0;i<j;i++)
	{
	 l = l+a[i];
	}
	for(k=i+1;k<n;k++)
	{
	 r = r+a[k];
	}
	if(l==r)
	{
	printf("%d Number is equilibrium \n",j);
	flag = 0;
	break;
	}

}
if(flag==1)
{
printf("Number is not equilibrium \n");
}
}
