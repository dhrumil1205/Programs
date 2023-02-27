#include<stdio.h>
void main()
{
int n,i,ps=0,ne=0,zero=0,ev=0,od=0;
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
	if(a[i]>0)
	{
	  ps++;
	}
	if(a[i]<0)
	{
	  ne++;
	}
	if(a[i]==0)
	{
	  zero++;
	}
	if(a[i]%2==0)
	{
	  ev++;
	}
	if(a[i]%2!=0)
	{
	  od++;
	}

}
printf("Total number of positive numbers is :%d\n",ps);
printf("Total number of negative numbers is :%d\n",ne);
printf("Total number of zeros is :%d\n",zero);
printf("Total number of even numbers is :%d\n",ev);
printf("Total number of odd numbers is :%d\n",od);
}

