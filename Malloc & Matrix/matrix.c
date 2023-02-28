#include<stdio.h>
void main()
{
int a[3][3],b[3][3],ans[3][3],i,j,k;

for(i=0;i<3;i++)
{

	for(j=0;j<3;j++)
	{	  
	  printf("Enter the first array for %d x %d :",i,j);
	  scanf("%d",&a[i][j]);
	}
	
}
for(i=0;i<3;i++)
{

	for(j=0;j<3;j++)
	{	  
	  printf("Enter the second array for %d x %d :",i,j);
	  scanf("%d",&b[i][j]);
	}
	
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	  ans[i][j]=0;
		for(k=0;k<3;k++)
		{
		  ans[i][j] = ans[i][j] + a[i][k]*b[k][j];
		}
	}
}
for(i=0;i<3;i++)
{

	for(j=0;j<3;j++)
	{	  
	  printf("%d   ",ans[i][j]);
	  
	}
printf("\n");
}
}
