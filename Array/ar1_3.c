#include<stdio.h>
void main()
{
int n,i,j,s,sum=0,k;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
printf("Enter the value of s :");
scanf("%d",&s);

for(i=0;i<n;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum = 0;
	for(j=i;j<n;j++)
	{
	 sum = sum+a[j];
		if(sum == s)
		{
		  printf("\nSub array is :");
		  for(k=i;k<=j;k++)
		  {
		    printf("%d,",a[k]);
		  }
			
		}
	}

}
}
